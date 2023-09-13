else if (input_user == 3)
        {
            if (jumlah_mahasiswa > 0)
            {
                int indeks_hapus;
                cout << "Masukkan indeks mahasiswa yang akan dihapus (0-" << jumlah_mahasiswa - 1 << "): ";
                cin >> indeks_hapus;

                if (indeks_hapus >= 0 && indeks_hapus < jumlah_mahasiswa)
                {
                    for (int i = indeks_hapus; i < jumlah_mahasiswa - 1; i++)
                    {
                        mhs[i] = mhs[i + 1];
                    }
                    jumlah_mahasiswa--;
                    cout << "Data mahasiswa telah dihapus." << endl;
                }
                else
                {
                    cout << "Indeks tidak valid." << endl;
                }
            }
            else
            {
                cout << "Tidak ada data mahasiswa untuk dihapus." << endl;
            }
        }
        else if (input_user == 4)
        {
            if (jumlah_mahasiswa > 0)
            {
                int indeks_ubah;
                cout << "Masukkan indeks mahasiswa yang akan diubah (0-" << jumlah_mahasiswa - 1 << "): ";
                cin >> indeks_ubah;

                if (indeks_ubah >= 0 && indeks_ubah < jumlah_mahasiswa)
                {
                    cout << "Masukkan data baru untuk mahasiswa ini:" << endl;
                    cout << "Nama: ";
                    cin >> mhs[indeks_ubah].name;
                    cout << "NRP: ";
                    cin >> mhs[indeks_ubah].nrp;
                    cout << "Usia: ";
                    cin >> mhs[indeks_ubah].age;
                    cout << "Jenis Kelamin (0 = Wanita, 1 = Pria): ";
                    cin >> mhs[indeks_ubah].gender;

                    cout << "Data mahasiswa telah diubah." << endl;
                }
                else
                {
                    cout << "Indeks tidak valid." << endl;
                }
            }
            else
            {
                cout << "Tidak ada data mahasiswa untuk diubah." << endl;
            }