/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B515C
 * Mangled: _ZN5Caver24PressureTriggerComponentC2Ev
 * Demangled: Caver::PressureTriggerComponent::PressureTriggerComponent(void)
 *
 * Callers: 1
 *   0x00000000001F91C0  Caver::PressureTriggerComponent::PressureTriggerComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000002B5168 string=0x00000000002B516C ""
 *   insn=0x00000000002B516C string=0x00000000002B5170 "J!B"
 *   insn=0x00000000002B517C string=0x00000000002B5180 "a"
 *   insn=0x00000000002B5180 string=0x00000000002B5184 "a"
 *   insn=0x00000000002B5184 string=0x00000000002B5188 "KA"
 *   insn=0x00000000002B518C string=0x00000000002B5190 ""
 *   insn=0x00000000002B5190 string=0x00000000002B5194 " "
 *   insn=0x00000000002B5194 string=0x00000000002B5198 ""
 *   insn=0x00000000002B5198 string=0x00000000002B519C "K"
 *   insn=0x00000000002B51A8 string=0x00000000002B51AC "`"
 *   insn=0x00000000002B51AC string=0x00000000002B51B0 "J"
 *   insn=0x00000000002B51B0 string=0x00000000002B51B4 ""
 *   insn=0x00000000002B51B4 string=0x00000000002B51B8 "D"
 *   insn=0x00000000002B51B8 string=0x00000000002B51BC "X"
 *   insn=0x00000000002B51C0 string=0x00000000002B51C4 "@"
 *   insn=0x00000000002B51C4 string=0x00000000002B51C8 "x"
 *   insn=0x00000000002B51C8 string=0x00000000002B51CC "\t|"
 *   insn=0x00000000002B51CC string=0x00000000002B51D0 "`"
 *   insn=0x00000000002B51D0 string=0x00000000002B51D4 "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::PressureTriggerComponent::PressureTriggerComponent(Caver::PressureTriggerComponent *this)
{
  __n128 result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_OWORD *)this + 2) = 0u;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6C4610;
  *((_OWORD *)this + 9) = 0u;
  *((_OWORD *)this + 10) = 0u;
  *(_OWORD *)((char *)this + 200) = 0u;
  *(_OWORD *)((char *)this + 184) = 0u;
  result.n128_u64[0] = (unsigned __int64)&off_6C4728;
  *((_QWORD *)this + 17) = &byte_6FD2F8;
  *((_QWORD *)this + 22) = &byte_6FD2F8;
  result.n128_u64[1] = (unsigned __int64)&off_6C4768;
  *((_DWORD *)this + 30) = 1084227584;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_BYTE *)this + 216) = 1;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((__n128 *)this + 1) = result;
  *((_QWORD *)this + 14) = 2139095039;
  *((_BYTE *)this + 217) = 0;
  return result;
}

