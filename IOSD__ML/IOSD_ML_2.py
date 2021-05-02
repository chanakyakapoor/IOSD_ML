import matplotlib.pyplot as plt
import numpy as np
import pandas as pd 

data = pd.read_csv('iosdml2_.csv')
x = data.iloc[: , :4].values
y = data.iloc[: , -1].values

from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
x = sc.fit_transform(x)

from  sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.3, random_state=0)

from sklearn.svm import SVC
clf_1 = SVC(kernel = 'rbf')
clf_2 = SVC(kernel='sigmoid')
clf_3 = SVC(kernel='poly')
clf_1.fit(x_train, y_train)
clf_2.fit(x_train, y_train)
clf_3.fit(x_train, y_train)


y_pred_1 = clf_1.predict(x_test)
y_pred_2 = clf_2.predict(x_test)
y_pred_3 = clf_3.predict(x_test)

from sklearn.metrics import f1_score, precision_score
a_1 = f1_score(y_test, y_pred_1, average='macro')
a_2 = f1_score(y_test, y_pred_2, average='macro')
a_3 = f1_score(y_test, y_pred_3, average='macro')
b_1 = precision_score(y_test, y_pred_1, average='macro')
b_2 = precision_score(y_test, y_pred_2, average='macro')
b_3 = precision_score(y_test, y_pred_3, average='macro')



df = pd.DataFrame({
    'Kernels': ['Gaussian', 'Sigmoid', 'Polynomial'],
    'f1_score': [a_1, a_2, a_3],
    'p_score': [b_1, b_2, b_3]
})
  

df.plot(x="Kernels", y=["f1_score", "p_score"], kind="bar")
plt.show()
