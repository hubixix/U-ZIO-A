﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Świąt_nie_będzie__chyba_
{
    public partial class Form18 : Form
    {
        public Form18()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Nie powinieneś siedzieć cicho, Grinch może coś zepsuć!");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Form19 form19 = new Form19();
            form19.Show();
            Hide();
        }
    }
}