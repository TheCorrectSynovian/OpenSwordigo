/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005139E0
 * Mangled: _ZN17CPVRTResourceFile11GetReadPathEv
 * Demangled: CPVRTResourceFile::GetReadPath(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCED0  CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000005139E0 string=0x00000000005139E4 ")5A"
 *   insn=0x00000000005139F0 string=0x00000000005139F4 "#"
 *   insn=0x00000000005139F4 string=0x00000000005139F8 "!"
 *   insn=0x00000000005139F8 string=0x00000000005139FC "5"
 *   insn=0x00000000005139FC string=0x00000000001FCED0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall CPVRTResourceFile::GetReadPath(CPVRTString *a1@<X8>)
{
  CPVRTString::CPVRTString(a1, (const CPVRTString *)&CPVRTResourceFile::s_ReadPath, 0, 0xFFFFFFFFFFFFFFFFLL);
}

