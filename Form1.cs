using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace sortor
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            richTextBox1.Clear();
            listBox1.Items.Clear();
            listBox2.Items.Clear();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (radioButton1.Checked == true)
            {
                listBox2.Items.Clear();
                int n = richTextBox1.Lines.Length;
                int[] a = new int[n];
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = Convert.ToInt32(richTextBox1.Lines[i]);
                }
                for (int i = 0; i < n-1; i++)
                {
                    for (int j = i + 1; j < n-1; j++)
                    {
                        if (a[i] < a[j])
                        {
                            int buf = a[i];
                            a[i] = a[j];
                            a[j] = buf;
                        }
                    }
                }
                for (int i = 0; i < n - 1; i++)
                {
                    listBox2.Items.Add(a[i]);
                }
            }
            if (radioButton2.Checked == true)
            {
                listBox2.Items.Clear();
                int n = richTextBox1.Lines.Length;
                double[] a = new double[n];
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = Convert.ToDouble(richTextBox1.Lines[i]);
                }
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = i + 1; j < n - 1; j++)
                    {
                        if (a[i] < a[j])
                        {
                            double buf = a[i];
                            a[i] = a[j];
                            a[j] = buf;
                        }
                    }
                }
                for (int i = 0; i < n - 1; i++)
                {
                    listBox2.Items.Add(a[i]);
                }

            }
            if (radioButton3.Checked == true)
            {
                listBox2.Items.Clear();
                int n = richTextBox1.Lines.Length;
                char[] a = new char[n];
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = Convert.ToChar(richTextBox1.Lines[i]);
                }
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = i + 1; j < n - 1; j++)
                    {
                        if (a[i] < a[j])
                        {
                            char buf = a[i];
                            a[i] = a[j];
                            a[j] = buf;
                        }
                    }
                }
                for (int i = 0; i < n - 1; i++)
                {
                    listBox2.Items.Add(a[i]);
                }
            }
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {
            if (radioButton1.Checked == true)
            {
                listBox1.Items.Clear();
                int n = richTextBox1.Lines.Length;
                int[] a = new int[n];
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = Convert.ToInt32(richTextBox1.Lines[i]);
                    listBox1.Items.Add(a[i]);
                }
            }
            if (radioButton2.Checked == true)
            {
                listBox1.Items.Clear();
                int n = richTextBox1.Lines.Length;
                double[] a = new double[n];
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = Convert.ToDouble(richTextBox1.Lines[i]);
                    listBox1.Items.Add(a[i]);
                }
            }
            if (radioButton3.Checked == true)
            {
                listBox1.Items.Clear();
                int n = richTextBox1.Lines.Length;
                char[] a = new char[n];
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = Convert.ToChar(richTextBox1.Lines[i]);
                    listBox1.Items.Add(a[i]);
                }
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.Text="Сортировка элементов";
        }
    }
}
