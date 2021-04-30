#IMPORTING LIBRARIES
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd 
# READING DATA FROM TRAIN DATASET
data_1 = pd.read_csv('iosdml1_train.csv')
x_train = data_1.iloc[:, :2].values
y_train = data_1.iloc[:, -1].values
# READING DATA FROM TEST DATASET
data_2 = pd.read_csv('iosdml1_test.csv')
x_test = data_1.iloc[:, :2].values
y_test = data_1.iloc[:, -1].values
# FEATURE SCALING
from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
x_train = sc.fit_transform(x_train)
x_test = sc.transform(x_test)
# KNN 
from sklearn.neighbors import KNeighborsClassifier
klf = KNeighborsClassifier(n_neighbors=25)
klf.fit(x_train, y_train)
# TESTING A SAMPLE
print(klf.predict(sc.transform([[8.480100064,58.5780145]])))
# ACCURACY OF MODEL
y_pred = klf.predict(x_test)
from sklearn.metrics import confusion_matrix, accuracy_score
print(confusion_matrix(y_test, y_pred))
print(accuracy_score(y_test, y_pred))




