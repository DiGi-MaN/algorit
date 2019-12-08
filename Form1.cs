using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();
            dataGridView1.Columns.Clear();
            dataGridView2.Rows.Clear();
            dataGridView2.Columns.Clear();
            dataGridView3.Rows.Clear();
            dataGridView3.Columns.Clear();
            int m = Convert.ToInt32(textBox1.Text);
            int n = Convert.ToInt32(textBox2.Text);
            int m1 = Convert.ToInt32(textBox3.Text);
            int n1 = Convert.ToInt32(textBox4.Text);
            dataGridView1.ColumnCount=n;
            dataGridView1.RowCount=m;
            dataGridView2.ColumnCount=n1;
            dataGridView2.RowCount=m1;
            int[,] matrix1 = new int[m,n];
            int[,] matrix2 = new int[m1,n1];
            Random random = new Random();
            for(int i=0; i<m; i++)
            {
                for (int j = 0; j <n; j++)
                {
                    matrix1[i, j] = random.Next(1, 20);
                    dataGridView1.Rows[i].Cells[j].Value = matrix1[i, j].ToString();
                }
            }
            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n1; j++)
                {
                    matrix2[i, j] = random.Next(1, 20);
                    dataGridView2.Rows[i].Cells[j].Value = matrix2[i, j].ToString();
                }
            }
            int[,] matrix3 = new int[m,n1];
            if ((m == n1) && (m1 == n))
            {
                for (int i = 0; i < dataGridView2.ColumnCount; i++)
                {
                    dataGridView3.Columns.Add("", "");
                }
                for (int j = 0; j < dataGridView1.RowCount; j++)
                {
                    dataGridView3.Rows.Add();
                }
                for (int i = 0; i < dataGridView1.RowCount; i++)
                {
                    for (int j = 0; j < dataGridView2.ColumnCount; j++)
                    {
                        int s = 0;
                        for (int k = 0; k < dataGridView2.RowCount; k++)
                            s += matrix1[i, k] * matrix2[k, j];
                        dataGridView3[j, i].Value = s;
                    }
                }
            }
            else MessageBox.Show("Неправильный ввод данных");
           
        }
    }
}
