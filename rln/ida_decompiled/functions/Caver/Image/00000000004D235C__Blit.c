/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D235C
 * Mangled: _ZN5Caver5Image4BlitEiiRKS0_iiii
 * Demangled: Caver::Image::Blit(int,int,Caver::Image const&,int,int,int,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 10
 *   insn=0x00000000004D239C string=0x00000000004D23A0 ")}"
 *   insn=0x00000000004D23A0 string=0x00000000004D23A4 "J}"
 *   insn=0x00000000004D23A4 string=0x00000000004D23A8 ")}J}n}"
 *   insn=0x00000000004D23A8 string=0x00000000004D23AC "J}n}"
 *   insn=0x00000000004D23AC string=0x00000000004D23B0 "n}"
 *   insn=0x00000000004D23BC string=0x00000000004D23C0 "7"
 *   insn=0x00000000004D23C0 string=0x00000000004D23C4 "X"
 *   insn=0x00000000004D23C4 string=0x00000000004D23C8 "}"
 *   insn=0x00000000004D23E8 string=0x00000000004D23EC "s"
 *   insn=0x00000000004D23F0 string=0x00000000004D23F4 "W]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::Image::Blit(
        _DWORD *this,
        int a2,
        int a3,
        const Caver::Image *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // w19
  __int64 v11; // x22
  __int64 v12; // x8
  char *v13; // x23
  char *v14; // x24

  v8 = a8;
  v11 = (__int64)this;
  if ( a8 >= 1 )
  {
    LODWORD(v12) = this[4];
    v13 = (char *)(*((_QWORD *)a4 + 3) + *((_DWORD *)a4 + 1) * a6 * *((_DWORD *)a4 + 4) + *((_DWORD *)a4 + 4) * a5);
    v14 = (char *)(*((_QWORD *)this + 3) + this[1] * a3 * (int)v12 + (int)v12 * a2);
    do
    {
      this = memcpy(v14, v13, (int)v12 * a7);
      v12 = *(int *)(v11 + 16);
      --v8;
      v14 += v12 * *(int *)(v11 + 4);
      v13 += *((int *)a4 + 4) * (__int64)*((int *)a4 + 1);
    }
    while ( v8 );
  }
  return this;
}

