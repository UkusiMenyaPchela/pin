using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace ос4_5
{
    public partial class Form1 : Form
    {
        
        string[] predcatalog = new string[200];
        string rab;


        public Form1()
        {
            InitializeComponent();
        }

       

        private void Form1_Load(object sender, EventArgs e)
        {
            string dirName = "D:";
                predcatalog[0] = dirName;
                listBox1.Items.Add("Каталоги");
            if (Directory.Exists(dirName))
            {
                listBox1.Items.Add(dirName);
                string[] dirs = Directory.GetDirectories(dirName);
                foreach (string s in dirs)
                {
                    listBox1.Items.Add(s);
                }
                listBox1.Items.Add(" ");
                listBox1.Items.Add("Файлы");
                string[] files = Directory.GetFiles(dirName);
                foreach (string s in files)
                {
                    listBox1.Items.Add(s);
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string katalogvibr = listBox1.SelectedItem.ToString();
            listBox1.Items.Clear();
            listBox1.Items.Add("Каталоги");
            if (Directory.Exists(katalogvibr))
            {
                listBox1.Items.Add(katalogvibr);
                string[] dirs = Directory.GetDirectories(katalogvibr);
                foreach (string s in dirs)
                {
                    listBox1.Items.Add(s);
                }

                listBox1.Items.Add(" ");
                listBox1.Items.Add("Файлы");
                string[] files = Directory.GetFiles(katalogvibr);
                foreach (string s in files)
                {
                    listBox1.Items.Add(s);
                }
            }
            for (int i = 1; i < listBox1.Items.Count; i++)
            {
                string stroka = listBox1.Items[i].ToString();
                if (stroka != " ")
                {
                    if (stroka != "Каталоги")
                    {
                        if (stroka != "Файлы")
                        {
                            predcatalog[i] = katalogvibr;
                        }
                    }
                }

            }
            rab = katalogvibr;


        }


        private void button3_Click(object sender, EventArgs e)
        {
            string catalog = @"D:\RABOTA1";
            string fileName = textBox1.Text.ToString();
            

            foreach (string findedFile in Directory.EnumerateFiles(catalog, fileName, SearchOption.AllDirectories))
            {
                FileInfo FI;
                try
                {
                    //по полному пути к файлу создаём объект класса FileInfo
                    FI = new FileInfo(findedFile);
                    //найденный результат выводим в консоль (имя, путь, размер, дата создания файла)
                    listBox2.Items.Add(FI.Name + " ");
                    listBox2.Items.Add(FI.FullName + " ");
                    listBox2.Items.Add(FI.Length + "_байт");
                    listBox2.Items.Add(" Создан: " + FI.CreationTime);

                }
                catch //слишком длинное имя файла
                {
                    continue;
                }
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            

        
        }
    }
    
}
