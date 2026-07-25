/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCED0
 * Mangled: ._ZN11CPVRTStringC2ERKS_mm
 * Demangled: CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *
 * Callers: 2
 *   0x00000000005139E0  CPVRTResourceFile::GetReadPath(void)
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Callees: 1
 *   0x0000000000514238  CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCED8 string=0x00000000001FCEDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTString::CPVRTString(
        CPVRTString *this,
        const CPVRTString *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _ZN11CPVRTStringC2ERKS_mm(this, a2, a3, a4);
}

