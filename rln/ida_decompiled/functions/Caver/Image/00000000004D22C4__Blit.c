/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D22C4
 * Mangled: _ZN5Caver5Image4BlitEiiRKS0_
 * Demangled: Caver::Image::Blit(int,int,Caver::Image const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 13
 *   insn=0x00000000004D22D8 string=0x00000000004D22DC "w\n@"
 *   insn=0x00000000004D22E4 string=0x00000000004D22E8 ""
 *   insn=0x00000000004D22F4 string=0x00000000004D22F8 "x"
 *   insn=0x00000000004D22F8 string=0x00000000004D22FC "u"
 *   insn=0x00000000004D22FC string=0x00000000004D2300 "}"
 *   insn=0x00000000004D2300 string=0x00000000004D2304 "i}\tI"
 *   insn=0x00000000004D2304 string=0x00000000004D2308 "I"
 *   insn=0x00000000004D2308 string=0x00000000004D230C "\n}"
 *   insn=0x00000000004D230C string=0x00000000004D2310 "6"
 *   insn=0x00000000004D2310 string=0x00000000004D2314 "}@"
 *   insn=0x00000000004D232C string=0x00000000004D2330 "j"
 *   insn=0x00000000004D2330 string=0x00000000004D2334 "k"
 *   insn=0x00000000004D233C string=0x00000000004D2340 "UU"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::Image::Blit(_DWORD *this, int a2, int a3, const Caver::Image *a4)
{
  int v5; // w23
  __int64 v6; // x20
  __int64 v7; // x8
  __int64 v8; // x24
  char *v9; // x21
  char *v10; // x22

  v5 = *((_DWORD *)a4 + 2);
  v6 = (__int64)this;
  if ( v5 >= 1 )
  {
    LODWORD(v7) = this[4];
    v8 = *((int *)a4 + 1);
    v9 = (char *)*((_QWORD *)a4 + 3);
    v10 = (char *)(*((_QWORD *)this + 3) + (int)v7 * a3 * this[1] + (int)v7 * a2);
    do
    {
      this = memcpy(v10, v9, (int)v7 * v8);
      v7 = *(int *)(v6 + 16);
      --v5;
      v10 += v7 * *(int *)(v6 + 4);
      v9 += *((int *)a4 + 4) * (__int64)*((int *)a4 + 1);
    }
    while ( v5 );
  }
  return this;
}

