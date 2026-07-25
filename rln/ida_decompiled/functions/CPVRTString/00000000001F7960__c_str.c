/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7960
 * Mangled: ._ZNK11CPVRTString5c_strEv
 * Demangled: CPVRTString::c_str(void)
 *
 * Callers: 1
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Callees: 1
 *   0x0000000000514924  CPVRTString::c_str(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7968 string=0x00000000001F796C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTString::c_str(CPVRTString *this)
{
  return _ZNK11CPVRTString5c_strEv(this);
}

