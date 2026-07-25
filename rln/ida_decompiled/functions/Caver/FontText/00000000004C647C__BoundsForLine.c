/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C647C
 * Mangled: _ZN5Caver8FontText13BoundsForLineEi
 * Demangled: Caver::FontText::BoundsForLine(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 25
 *   insn=0x00000000004C647C string=0x00000000004C6480 "\td@"
 *   insn=0x00000000004C6480 string=0x00000000004C6484 "+"
 *   insn=0x00000000004C6484 string=0x00000000004C6488 "jM@"
 *   insn=0x00000000004C6488 string=0x00000000004C648C "_"
 *   insn=0x00000000004C648C string=0x00000000004C6490 "k"
 *   insn=0x00000000004C6490 string=0x00000000004C6494 "*|@"
 *   insn=0x00000000004C6494 string=0x00000000004C6498 "-\n"
 *   insn=0x00000000004C649C string=0x00000000004C64A0 "\tX@"
 *   insn=0x00000000004C64A4 string=0x00000000004C64A8 "J%"
 *   insn=0x00000000004C64A8 string=0x00000000004C64AC "@A"
 *   insn=0x00000000004C64B0 string=0x00000000004C64B4 "l"
 *   insn=0x00000000004C64BC string=0x00000000004C64C0 "+"
 *   insn=0x00000000004C64C0 string=0x00000000004C64C4 "N}@"
 *   insn=0x00000000004C64EC string=0x00000000004C64F0 "("
 *   insn=0x00000000004C651C string=0x00000000004C6520 "l"
 *   insn=0x00000000004C6524 string=0x00000000004C6528 "m"
 *   insn=0x00000000004C652C string=0x00000000004C6530 "m"
 *   insn=0x00000000004C6538 string=0x00000000004C653C "!"
 *   insn=0x00000000004C6544 string=0x00000000004C6548 "J}@"
 *   insn=0x00000000004C654C string=0x00000000004C6550 "\t"
 *   insn=0x00000000004C6550 string=0x00000000004C6554 "-"
 *   insn=0x00000000004C6558 string=0x00000000004C655C "("
 *   insn=0x00000000004C6568 string=0x00000000004C656C "k"
 *   insn=0x00000000004C6570 string=0x00000000004C6574 "!"
 *   insn=0x00000000004C6584 string=0x00000000001F6E00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::FontText::BoundsForLine@<X0>(__int64 this@<X0>, int a2@<W1>, Caver::Rectangle *a3@<X8>)
{
  __int64 v3; // x9
  __int64 v4; // x11
  int *v5; // x11
  int v6; // t1
  int *v7; // x13
  __int64 v8; // x9
  int v9; // w12
  int v10; // w10
  __int64 v11; // x14
  _OWORD *v12; // x16
  int v13; // w13
  const Caver::Rectangle *v14; // x1
  __int64 v15; // x11
  unsigned int v16; // w13

  *(_QWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0;
  v3 = *(_QWORD *)(this + 200);
  v4 = v3 + 8LL * a2;
  v6 = *(_DWORD *)(v4 + 4);
  v5 = (int *)(v4 + 4);
  if ( v6 >= 1 )
  {
    v7 = (int *)(v3 + 8LL * a2);
    v8 = *(_QWORD *)(this + 176);
    *(_OWORD *)a3 = *(_OWORD *)(v8 + 36LL * *v7 + 4);
    v9 = *v5;
    v10 = *v7;
    if ( *v5 >= 1 )
    {
      v11 = v10;
      v12 = (_OWORD *)(v8 + 36LL * v10 + 4);
      while ( 1 )
      {
        this = *((unsigned __int8 *)v12 - 4);
        if ( (unsigned int)this > 0x20 )
          break;
        this = 1LL << this;
        if ( (this & 0x100000600LL) == 0 )
          break;
        ++v11;
        v12 = (_OWORD *)((char *)v12 + 36);
        if ( v11 >= v9 + v10 )
          goto LABEL_9;
      }
      *(_OWORD *)a3 = *v12;
      v10 = *v7;
      v9 = *v5;
    }
LABEL_9:
    v13 = v9 + v10 - 1;
    if ( v13 > v10 )
    {
      v14 = (const Caver::Rectangle *)(v8 + 36LL * v13 + 4);
      v15 = v13;
      while ( 1 )
      {
        v16 = *((unsigned __int8 *)v14 - 4);
        if ( v16 > 0x20 || ((1LL << v16) & 0x100000600LL) == 0 )
          break;
        --v15;
        v14 = (const Caver::Rectangle *)((char *)v14 - 36);
        if ( v15 <= v10 )
          return this;
      }
      return Caver::Rectangle::ExpandToincludeRectangle(a3, v14);
    }
  }
  return this;
}

