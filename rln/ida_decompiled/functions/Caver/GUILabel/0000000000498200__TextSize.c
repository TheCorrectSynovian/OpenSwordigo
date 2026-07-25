/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000498200
 * Mangled: _ZNK5Caver8GUILabel8TextSizeEv
 * Demangled: Caver::GUILabel::TextSize(void)
 *
 * Callers: 1
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000498204 string=0x0000000000498208 ")%@"
 *   insn=0x0000000000498208 string=0x000000000049820C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUILabel::TextSize@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x9

  v2 = *(_QWORD *)(this + 288);
  if ( v2 )
    *a2 = *(_QWORD *)(v2 + 72);
  else
    *a2 = 0;
  return this;
}

