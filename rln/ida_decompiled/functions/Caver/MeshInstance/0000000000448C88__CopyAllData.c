/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000448C88
 * Mangled: _ZN5Caver12MeshInstance11CopyAllDataEv
 * Demangled: Caver::MeshInstance::CopyAllData(void)
 *
 * Callers: 1
 *   0x0000000000201C70  Caver::MeshInstance::CopyAllData(void)
 *
 * Callees: 2
 *   0x00000000001FFAF0  Caver::MeshData::valueSize(void)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 52
 *   insn=0x0000000000448CA4 string=0x0000000000448CA8 "t"
 *   insn=0x0000000000448CA8 string=0x0000000000448CAC "w"
 *   insn=0x0000000000448CAC string=0x0000000000448CB0 "4"
 *   insn=0x0000000000448CB0 string=0x0000000000448D14 "t"@"
 *   insn=0x0000000000448CB4 string=0x0000000000448CB8 "v"
 *   insn=0x0000000000448CB8 string=0x0000000000448CBC "`b"
 *   insn=0x0000000000448CC0 string=0x0000000000448CC4 "h"
 *   insn=0x0000000000448CC4 string=0x0000000000448CC8 "\t"
 *   insn=0x0000000000448CC8 string=0x0000000000448CCC ")"
 *   insn=0x0000000000448CCC string=0x0000000000448CD0 "|@"
 *   insn=0x0000000000448CE8 string=0x0000000000448CEC "h"
 *   insn=0x0000000000448CEC string=0x0000000000448CF0 "i"@"
 *   insn=0x0000000000448CF8 string=0x0000000000448CFC "\n"
 *   insn=0x0000000000448D14 string=0x0000000000448D18 "4"
 *   insn=0x0000000000448D1C string=0x0000000000448D20 "v6"
 *   insn=0x0000000000448D20 string=0x0000000000448D24 "`"
 *   insn=0x0000000000448D24 string=0x0000000000448D28 "r"
 *   insn=0x0000000000448D28 string=0x0000000000448D2C "h"
 *   insn=0x0000000000448D2C string=0x0000000000448D30 "\t"
 *   insn=0x0000000000448D30 string=0x0000000000448D34 ")"
 *   insn=0x0000000000448D34 string=0x0000000000448D38 "|@"
 *   insn=0x0000000000448D50 string=0x0000000000448D54 "h"
 *   insn=0x0000000000448D54 string=0x0000000000448D58 "i:@"
 *   insn=0x0000000000448D60 string=0x0000000000448D64 "\n"
 *   insn=0x0000000000448D80 string=0x0000000000448D84 "k"
 *   insn=0x0000000000448D84 string=0x0000000000448E30 "t2@"
 *   insn=0x0000000000448D8C string=0x0000000000448D90 "h&@"
 *   insn=0x0000000000448D94 string=0x0000000000448D98 "\t#"
 *   insn=0x0000000000448D98 string=0x0000000000448D9C "4\t@"
 *   insn=0x0000000000448DA4 string=0x0000000000448DA8 "\n"
 *   insn=0x0000000000448DA8 string=0x0000000000448DAC "J"
 *   insn=0x0000000000448DB0 string=0x0000000000448DB4 "<"
 *   insn=0x0000000000448DC0 string=0x0000000000448DC4 "K"
 *   insn=0x0000000000448DC4 string=0x0000000000448DC8 "w"
 *   insn=0x0000000000448DD0 string=0x0000000000448DD4 "|@"
 *   insn=0x0000000000448DF0 string=0x0000000000448DF4 "["
 *   insn=0x0000000000448DF4 string=0x0000000000448DF8 "w"
 *   insn=0x0000000000448DF8 string=0x0000000000448DFC "h"
 *   insn=0x0000000000448E00 string=0x0000000000448E04 "Z"
 *   insn=0x0000000000448E10 string=0x0000000000448E14 "_"
 *   insn=0x0000000000448E28 string=0x0000000000448E2C "+"
 *   insn=0x0000000000448E38 string=0x0000000000448E3C "vV"
 *   insn=0x0000000000448E3C string=0x0000000000448E40 "`B"
 *   insn=0x0000000000448E40 string=0x0000000000448E44 "+"
 *   insn=0x0000000000448E44 string=0x0000000000448E48 "h"
 *   insn=0x0000000000448E48 string=0x0000000000448E4C ""
 *   insn=0x0000000000448E4C string=0x0000000000448E50 "("
 *   insn=0x0000000000448E50 string=0x0000000000448E54 "|@"
 *   insn=0x0000000000448E68 string=0x0000000000448E6C "="
 *   insn=0x0000000000448E6C string=0x0000000000448E70 "h"
 *   insn=0x0000000000448E70 string=0x0000000000448E74 "iZ@"
 *   insn=0x0000000000448E7C string=0x0000000000448E80 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::MeshInstance::CopyAllData(_QWORD *this)
{
  __int64 v1; // x19
  char *v2; // x20
  _DWORD *v3; // x23
  char *v4; // x21
  __int64 v5; // x22
  _DWORD *v6; // x8
  unsigned int v7; // w24
  size_t v8; // x22
  char *v9; // x20
  char *v10; // x21
  __int64 v11; // x22
  _DWORD *v12; // x8
  unsigned int v13; // w24
  size_t v14; // x22
  __int64 v15; // x24
  __int64 v16; // x8
  char *v17; // x20
  int *v18; // x22
  __int64 v19; // x28
  char *v20; // x21
  __int64 v21; // x25
  unsigned int v22; // w26
  unsigned int *v23; // x27
  size_t v24; // x22
  unsigned int *v25; // x28
  char *v26; // x20
  char *v27; // x21
  __int64 v28; // x22
  unsigned int v29; // w24
  size_t v30; // x22

  v1 = (__int64)this;
  v2 = (char *)this[5];
  v3 = (_DWORD *)*this;
  if ( v2 )
  {
    v4 = (char *)*((_QWORD *)v3 + 6);
    v5 = *((int *)this + 7);
    this = (_QWORD *)Caver::MeshData::valueSize((Caver::MeshData *)(this + 3));
    v6 = *(_DWORD **)v1;
    if ( **(_DWORD **)v1 )
    {
      v7 = 0;
      v8 = (int)this * v5;
      do
      {
        this = memcpy(v2, v4, v8);
        v6 = *(_DWORD **)v1;
        ++v7;
        v2 += *(unsigned int *)(v1 + 32);
        v4 += (unsigned int)v3[10];
      }
      while ( v7 < **(_DWORD **)v1 );
    }
    v3 = v6;
  }
  v9 = *(char **)(v1 + 64);
  if ( v9 )
  {
    v10 = (char *)*((_QWORD *)v3 + 9);
    v11 = *(int *)(v1 + 52);
    this = (_QWORD *)Caver::MeshData::valueSize((Caver::MeshData *)(v1 + 48));
    v12 = *(_DWORD **)v1;
    if ( **(_DWORD **)v1 )
    {
      v13 = 0;
      v14 = (int)this * v11;
      do
      {
        this = memcpy(v9, v10, v14);
        v12 = *(_DWORD **)v1;
        ++v13;
        v9 += *(unsigned int *)(v1 + 56);
        v10 += (unsigned int)v3[16];
      }
      while ( v13 < **(_DWORD **)v1 );
    }
    v3 = v12;
  }
  if ( (int)v3[80] >= 1 )
  {
    v15 = 0;
    do
    {
      v16 = *(_QWORD *)(v1 + 72);
      v17 = *(char **)(v16 + 24 * v15 + 16);
      if ( v17 )
      {
        v18 = (int *)(v16 + 24 * v15);
        v19 = *((_QWORD *)v3 + 10) + 24 * v15;
        v20 = *(char **)(v19 + 16);
        v21 = v18[1];
        this = (_QWORD *)Caver::MeshData::valueSize((Caver::MeshData *)v18);
        v3 = *(_DWORD **)v1;
        if ( **(_DWORD **)v1 )
        {
          v22 = 0;
          v23 = (unsigned int *)(v18 + 2);
          v24 = (int)this * v21;
          v25 = (unsigned int *)(v19 + 8);
          do
          {
            this = memcpy(v17, v20, v24);
            v3 = *(_DWORD **)v1;
            ++v22;
            v17 += *v23;
            v20 += *v25;
          }
          while ( v22 < **(_DWORD **)v1 );
        }
      }
      ++v15;
    }
    while ( v15 < (int)v3[80] );
  }
  v26 = *(char **)(v1 + 96);
  if ( v26 )
  {
    v27 = (char *)*((_QWORD *)v3 + 13);
    v28 = *(int *)(v1 + 84);
    this = (_QWORD *)Caver::MeshData::valueSize((Caver::MeshData *)(v1 + 80));
    if ( **(_DWORD **)v1 )
    {
      v29 = 0;
      v30 = (int)this * v28;
      do
      {
        this = memcpy(v26, v27, v30);
        ++v29;
        v26 += *(unsigned int *)(v1 + 88);
        v27 += (unsigned int)v3[24];
      }
      while ( v29 < **(_DWORD **)v1 );
    }
  }
  return this;
}

