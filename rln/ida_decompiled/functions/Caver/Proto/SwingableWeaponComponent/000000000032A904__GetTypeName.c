/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A904
 * Mangled: _ZNK5Caver5Proto24SwingableWeaponComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SwingableWeaponComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000032A910 string=0x000000000032A914 "S"
 *   insn=0x000000000032A914 string=0x000000000032A918 "i"
 *   insn=0x000000000032A920 string=0x000000000058C3D1 "Caver.Proto.SwingableWeaponComponent"
 *   insn=0x000000000032A930 string=0x000000000032A934 "h"
 *   insn=0x000000000032A940 string=0x000000000032A954 "_."
 *   insn=0x000000000032A954 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032A95C string=0x000000000032A960 ""
 *   insn=0x000000000032A968 string=0x000000000032A96C ")\tB"
 *   insn=0x000000000032A970 string=0x000000000032A974 "JqD"
 *   insn=0x000000000032A974 string=0x000000000032A978 "A"
 *   insn=0x000000000032A978 string=0x000000000032A97C " "
 *   insn=0x000000000032A97C string=0x000000000032A980 ""
 *   insn=0x000000000032A980 string=0x000000000032A984 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SwingableWeaponComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SwingableWeaponComponent");
}

