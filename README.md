# ML-Model on finding if a molecule is soluble in water and will it be a good drug additive

Here I have tries to understand how Linear Regression and Random forest works out.
I have used Gooogle Colab as the playground,

link of the CSV file : "https://raw.githubusercontent.com/dataprofessor/data/refs/heads/master/delaney_solubility_with_descriptors.csv"

### Model Performance Metrics (Linear Regression)

<table>
  <thead>
    <tr>
      <th>Metric</th>
      <th>Training Set</th>
      <th>Test Set</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>LR MSE</td>
      <td>1.0075362951093687</td>
      <td>1.0206953660861033</td>
    </tr>
    <tr>
      <td>LR R2</td>
      <td>0.7645051774663391</td>
      <td>0.7891616188563282</td>
    </tr>
  </tbody>
</table>

### Model Performance Metrics (Random Forest)
<table>
  <thead>
    <tr>
      <th>Method</th>
      <th>Training MSE</th>
      <th>Training R2</th>
      <th>Test MSE</th>
      <th>Test R2</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Random forest</td>
      <td>1.028228</td>
      <td>0.759669</td>
      <td>1.407688</td>
      <td>1.407688</td>
    </tr>
  </tbody>
</table>

## Model Comparision 
<img width="480" height="96" alt="image" src="https://github.com/user-attachments/assets/f3c4d161-0865-4fb8-8b44-a26ca3cf23f7" />
