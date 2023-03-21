import pandas as pd 
import numpy as np

dataset = pd.read_csv('Data.csv')
x=dataset.iloc[:,:-1].values
print(x)