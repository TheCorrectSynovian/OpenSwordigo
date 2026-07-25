/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000487A0C
 * Mangled: _ZNK5Caver12BindingValue12ProgramValueEv
 * Demangled: Caver::BindingValue::ProgramValue(void)
 *
 * Callers: 2
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x0000000000487824  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 10
 *   insn=0x0000000000487A2C string=0x0000000000487A30 "h"
 *   insn=0x0000000000487A34 string=0x0000000000487A38 "h\n"
 *   insn=0x0000000000487A3C string=0x0000000000487A40 "\t"
 *   insn=0x0000000000487A40 string=0x0000000000487A44 ")"
 *   insn=0x0000000000487A44 string=0x0000000000487A48 "\t"
 *   insn=0x0000000000487A4C string=0x0000000000487A50 "h"
 *   insn=0x0000000000487A54 string=0x0000000000487A58 "h"
 *   insn=0x0000000000487A5C string=0x0000000000487A60 "\t"
 *   insn=0x0000000000487A60 string=0x0000000000487A64 ")"
 *   insn=0x0000000000487A64 string=0x0000000000487A68 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BindingValue::ProgramValue@<X0>(Caver::BindingValue *this@<X0>, _QWORD *a2@<X8>)
{
  _QWORD *v2; // x20
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 1);
  result = sub_56A528(a2, v2);
  a2[1] = v2[1];
  v5 = v2[2];
  a2[2] = v5;
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  a2[3] = v2[3];
  v6 = v2[4];
  a2[4] = v6;
  if ( v6 )
    ++*(_QWORD *)(v6 + 8);
  return result;
}

