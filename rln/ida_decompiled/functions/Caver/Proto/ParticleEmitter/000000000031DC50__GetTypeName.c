/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031DC50
 * Mangled: _ZNK5Caver5Proto15ParticleEmitter11GetTypeNameEv
 * Demangled: Caver::Proto::ParticleEmitter::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000031DC5C string=0x000000000031DC60 "S"
 *   insn=0x000000000031DC60 string=0x000000000031DC64 "i"
 *   insn=0x000000000031DC68 string=0x000000000031DC6C "a"
 *   insn=0x000000000031DC6C string=0x000000000058C08C "Caver.Proto.ParticleEmitter"
 *   insn=0x000000000031DC7C string=0x000000000031DC80 "h"
 *   insn=0x000000000031DCA0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031DCA4 string=0x000000000031DCA8 ""
 *   insn=0x000000000031DCA8 string=0x000000000031DCAC ""
 *   insn=0x000000000031DCAC string=0x000000000031DCB0 "h"
 *   insn=0x000000000031DCB4 string=0x000000000031DCB8 "`"
 *   insn=0x000000000031DCB8 string=0x000000000031DCBC " "
 *   insn=0x000000000031DCC0 string=0x000000000031DCC4 "P"
 *   insn=0x000000000031DCC4 string=0x000000000031DCC8 "H"
 *   insn=0x000000000031DCC8 string=0x000000000031DCCC "5@"
 *   insn=0x000000000031DCD8 string=0x000000000031DCDC "A"
 *   insn=0x000000000031DCE4 string=0x000000000031DCE8 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ParticleEmitter::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ParticleEmitter");
}

