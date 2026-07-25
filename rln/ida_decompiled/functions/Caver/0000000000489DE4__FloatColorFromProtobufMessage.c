/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489DE4
 * Mangled: _ZN5Caver29FloatColorFromProtobufMessageERKNS_5Proto10FloatColorE
 * Demangled: Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *
 * Callers: 1
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000489DE4 string=0x0000000000489DE8 "\n@A"
 *   insn=0x0000000000489DE8 string=0x0000000000489DEC "\t)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::FloatColorFromProtobufMessage@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  __int64 v3; // x10

  v3 = *(_QWORD *)(this + 20);
  *a2 = *(_QWORD *)(this + 12);
  a2[1] = v3;
  return this;
}

