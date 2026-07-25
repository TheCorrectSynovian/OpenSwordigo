/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049821C
 * Mangled: _ZNK5Caver8GUILabel10TextBoundsEv
 * Demangled: Caver::GUILabel::TextBounds(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000049821C string=0x0000000000498220 "i"
 *   insn=0x0000000000498220 string=0x0000000000498224 " %@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUILabel::TextBounds@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x9
  __int64 v3; // d0

  v2 = *(_QWORD *)(this + 288);
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 72);
  else
    v3 = 0;
  *a2 = 0;
  a2[1] = v3;
  return this;
}

