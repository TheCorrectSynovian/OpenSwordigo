/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8CD0
 * Mangled: _ZN5boost6random6detail19pass_through_engineINS2_IPNS0_16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEEEclEv
 * Demangled: boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()(void)
 *
 * Callers: 1
 *   0x00000000001F3410  boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()(void)
 *
 * Callees: 0
 *
 * Referenced strings: 46
 *   insn=0x00000000004B8CD0 string=0x00000000004B8CD4 "\n"
 *   insn=0x00000000004B8CD4 string=0x00000000004B8CD8 "_"
 *   insn=0x00000000004B8CDC string=0x00000000004B8CE0 ""
 *   insn=0x00000000004B8CDC string=0x00000000004B8D30 "_"
 *   insn=0x00000000004B8CE8 string=0x00000000004B8CEC "\n!"
 *   insn=0x00000000004B8CEC string=0x00000000004B8CF0 ""
 *   insn=0x00000000004B8CF0 string=0x00000000004B8CF4 "l"
 *   insn=0x00000000004B8CFC string=0x00000000004B8D00 ")"
 *   insn=0x00000000004B8D00 string=0x00000000004B8D04 "?"
 *   insn=0x00000000004B8D04 string=0x00000000004B8D08 "ou"
 *   insn=0x00000000004B8D08 string=0x00000000004B8D0C "p"
 *   insn=0x00000000004B8D20 string=0x00000000004B8D24 "a"
 *   insn=0x00000000004B8D24 string=0x00000000004B8D28 "\n"
 *   insn=0x00000000004B8D28 string=0x00000000004B8D2C "2"
 *   insn=0x00000000004B8D2C string=0x00000000004B8DF4 "\t"
 *   insn=0x00000000004B8D30 string=0x00000000004B8D34 ""
 *   insn=0x00000000004B8D34 string=0x00000000004B8D38 ""
 *   insn=0x00000000004B8D40 string=0x00000000004B8D44 "\t!"
 *   insn=0x00000000004B8D44 string=0x00000000004B8D48 ""
 *   insn=0x00000000004B8D48 string=0x00000000004B8D4C "l"
 *   insn=0x00000000004B8D54 string=0x00000000004B8D58 "J"
 *   insn=0x00000000004B8D58 string=0x00000000004B8D5C "_1"
 *   insn=0x00000000004B8D5C string=0x00000000004B8D60 "ou"
 *   insn=0x00000000004B8D60 string=0x00000000004B8D64 "p"
 *   insn=0x00000000004B8D78 string=0x00000000004B8D7C "a"
 *   insn=0x00000000004B8D7C string=0x00000000004B8D80 "\nMM"
 *   insn=0x00000000004B8D84 string=0x00000000004B8D88 ""
 *   insn=0x00000000004B8D88 string=0x00000000004B8D8C "L"
 *   insn=0x00000000004B8D94 string=0x00000000004B8D98 "k"
 *   insn=0x00000000004B8D9C string=0x00000000004B8DA0 "Ou"
 *   insn=0x00000000004B8DA0 string=0x00000000004B8DA4 "P"
 *   insn=0x00000000004B8DB8 string=0x00000000004B8DBC "a"
 *   insn=0x00000000004B8DBC string=0x00000000004B8DC0 "}S"
 *   insn=0x00000000004B8DC4 string=0x00000000004B8DC8 "1F"
 *   insn=0x00000000004B8DCC string=0x00000000004B8DD0 "k"
 *   insn=0x00000000004B8DE4 string=0x00000000004B8DE8 "i"
 *   insn=0x00000000004B8DE8 string=0x00000000004B8DEC "\t"
 *   insn=0x00000000004B8DF4 string=0x00000000004B8DF8 ""
 *   insn=0x00000000004B8DF8 string=0x00000000004B8E00 "J"
 *   insn=0x00000000004B8E00 string=0x00000000004B8E04 ")-IJk"
 *   insn=0x00000000004B8E04 string=0x00000000004B8E08 "k"
 *   insn=0x00000000004B8E08 string=0x00000000004B8E0C "i"
 *   insn=0x00000000004B8E10 string=0x00000000004B8E14 "k=\t\ni"
 *   insn=0x00000000004B8E14 string=0x00000000004B8E18 "i"
 *   insn=0x00000000004B8E18 string=0x00000000004B8E1C " IIJ\n"
 *   insn=0x00000000004B8E1C string=0x00000000004B8E20 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()(
        int **a1)
{
  int *v1; // x8
  int v2; // w10
  int v3; // w11
  __int64 i; // x9
  int *v5; // x13
  unsigned int v6; // w12
  int v7; // w14
  int v8; // w11
  __int64 j; // x10
  unsigned int *v10; // x13
  unsigned int v11; // w12
  int v12; // w14
  int v13; // w10
  __int64 k; // x11
  int *v15; // x13
  unsigned int v16; // w12
  int v17; // w14
  unsigned int v18; // w9
  __int64 result; // x0

  v1 = *a1;
  v2 = (*a1)[1248];
  if ( v2 == 624 )
  {
    v3 = *v1;
    for ( i = 0; i != 624; ++i )
    {
      v5 = &v1[i];
      v6 = v3 & 0x80000000;
      v3 = v1[i + 1];
      v7 = v1[i + 397];
      v5[624] = v7 ^ ((v3 & 0x7FFFFFFE | v6) >> 1) ^ (v3 << 31 >> 31) & 0x9908B0DF;
    }
    v2 = v1[1248];
  }
  else if ( v2 >= 1248 )
  {
    v8 = v1[624];
    for ( j = 0; j != 227; ++j )
    {
      v10 = (unsigned int *)&v1[j];
      v11 = v8 & 0x80000000;
      v8 = v1[j + 625];
      v12 = v1[j + 1021];
      *v10 = v12 ^ ((v8 & 0x7FFFFFFE | v11) >> 1) ^ (v8 << 31 >> 31) & 0x9908B0DF;
    }
    v13 = v1[851];
    for ( k = 0; k != 396; ++k )
    {
      v15 = &v1[k];
      v16 = v13 & 0x80000000;
      v13 = v1[k + 852];
      v17 = v1[k];
      v15[227] = v17 ^ ((v13 & 0x7FFFFFFE | v16) >> 1) ^ (v13 << 31 >> 31) & 0x9908B0DF;
    }
    v2 = 0;
    v1[623] = v1[396] ^ ((*v1 & 0x7FFFFFFE | v1[1247] & 0x80000000) >> 1) ^ (*v1 << 31 >> 31) & 0x9908B0DF;
    v1[1248] = 0;
  }
  v18 = ((v1[v2] ^ ((unsigned int)v1[v2] >> 11)) << 7) & 0x9D2C5680 ^ v1[v2] ^ ((unsigned int)v1[v2] >> 11);
  result = (v18 << 15) & 0xEFC60000 ^ v18 ^ (((v18 << 15) & 0xEFC60000 ^ v18) >> 18);
  v1[1248] = v2 + 1;
  return result;
}

