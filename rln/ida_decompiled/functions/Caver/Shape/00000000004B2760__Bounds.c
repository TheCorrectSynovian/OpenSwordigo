/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2760
 * Mangled: _ZNK5Caver5Shape6BoundsEv
 * Demangled: Caver::Shape::Bounds(void)
 *
 * Callers: 1
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *
 * Callees: 2
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *   0x0000000000201B90  Caver::Circle::Bounds(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000004B2760 string=0x00000000004B2764 "?"
 *   insn=0x00000000004B2764 string=0x00000000004B2768 " "
 *   insn=0x00000000004B2768 string=0x00000000004B276C "?\t"
 *   insn=0x00000000004B276C string=0x00000000004B2770 " "
 *   insn=0x00000000004B2770 string=0x00000000004B2774 "?"
 *   insn=0x00000000004B2774 string=0x00000000004B2778 "!"
 *   insn=0x00000000004B2778 string=0x00000000004B277C "\t"
 *   insn=0x00000000004B277C string=0x00000000004B2780 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::Shape::Bounds@<X0>(__int64 *this@<X0>, __int64 *a2@<X8>)
{
  int v2; // w9

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this == 3 )
    return Caver::Polygon::Bounds(a2, (Caver::Polygon *)this[1]);
  if ( v2 == 2 )
    return (__int64 *)Caver::Circle::Bounds((Caver::Circle *)this[1]);
  if ( v2 == 1 )
  {
    *(_OWORD *)a2 = *(_OWORD *)this[1];
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
  return this;
}

