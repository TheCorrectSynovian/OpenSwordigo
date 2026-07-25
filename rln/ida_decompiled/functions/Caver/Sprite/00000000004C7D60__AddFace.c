/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7D60
 * Mangled: _ZN5Caver6Sprite7AddFaceEiii
 * Demangled: Caver::Sprite::AddFace(int,int,int)
 *
 * Callers: 1
 *   0x0000000000200030  Caver::Sprite::AddFace(int,int,int)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 27
 *   insn=0x00000000004C7D8C string=0x00000000004C7D90 "_"
 *   insn=0x00000000004C7D94 string=0x00000000004C7D98 "y"
 *   insn=0x00000000004C7DA4 string=0x00000000004C7DA8 "?"
 *   insn=0x00000000004C7DA8 string=0x00000000004C7DAC "k"
 *   insn=0x00000000004C7DAC string=0x00000000004C7DB0 "("
 *   insn=0x00000000004C7DB8 string=0x00000000004C7DBC "_"
 *   insn=0x00000000004C7DB8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C7DC4 string=0x00000000004C7DC8 ""
 *   insn=0x00000000004C7DC8 string=0x00000000004C7DCC "x"
 *   insn=0x00000000004C7DC8 string=0x00000000004C7E08 "x"
 *   insn=0x00000000004C7DCC string=0x00000000004C7DD0 "_"
 *   insn=0x00000000004C7DD0 string=0x00000000004C7DD4 "("
 *   insn=0x00000000004C7DD4 string=0x00000000004C7DD8 ""
 *   insn=0x00000000004C7DE4 string=0x00000000004C7DE8 "^"
 *   insn=0x00000000004C7DE8 string=0x00000000004C7DEC "w"
 *   insn=0x00000000004C7DEC string=0x00000000004C7DF0 "8"
 *   insn=0x00000000004C7DF0 string=0x00000000004C7DF4 "\n"
 *   insn=0x00000000004C7E00 string=0x00000000004C7E18 "R"
 *   insn=0x00000000004C7E08 string=0x00000000004C7E0C "w"
 *   insn=0x00000000004C7E0C string=0x00000000004C7E10 "x"
 *   insn=0x00000000004C7E18 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C7E24 string=0x00000000004C7E28 "I"
 *   insn=0x00000000004C7E28 string=0x00000000004C7E2C ")"
 *   insn=0x00000000004C7E2C string=0x00000000004C7E30 "J"
 *   insn=0x00000000004C7E30 string=0x00000000004C7E34 ""
 *   insn=0x00000000004C7E34 string=0x00000000004C7E38 ""
 *   insn=0x00000000004C7E3C string=0x00000000004C7E40 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Sprite::AddFace(Caver::Sprite *this, __int16 a2, __int16 a3, __int16 a4)
{
  int v5; // w8
  int v6; // w26
  int v10; // w8
  int v11; // w25
  void *v12; // x0
  void *v13; // x23
  void *v14; // x24
  int v15; // w8
  __int64 v16; // x8
  __int64 v17; // x11
  _WORD *v18; // x8

  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 7);
  if ( v6 >= v5 )
  {
    v10 = 2 * v5;
    if ( v10 <= 2 )
      v11 = 2;
    else
      v11 = v10;
    v12 = (void *)operator new[]((unsigned int)(6 * v11));
    v13 = v12;
    if ( v6 <= 0 )
    {
      v14 = (void *)*((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = v12;
      if ( !v14 )
      {
LABEL_13:
        v6 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v11;
        goto LABEL_14;
      }
    }
    else
    {
      v14 = (void *)*((_QWORD *)this + 4);
      if ( v6 <= v11 )
        v15 = v6;
      else
        v15 = v11;
      memcpy(v12, v14, 6LL * v15);
      *((_QWORD *)this + 4) = v13;
      if ( !v14 )
        goto LABEL_13;
    }
    operator delete[](v14);
    goto LABEL_13;
  }
LABEL_14:
  v16 = *((_QWORD *)this + 4);
  v17 = v16 + 6LL * v6;
  v18 = (_WORD *)(v16 + 6LL * v6);
  *v18 = a2;
  *(_WORD *)(v17 + 2) = a3;
  v18[2] = a4;
  *((_DWORD *)this + 7) = v6 + 1;
}

