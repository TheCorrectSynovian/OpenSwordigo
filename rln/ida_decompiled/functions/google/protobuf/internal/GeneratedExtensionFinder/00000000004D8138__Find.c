/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8138
 * Mangled: _ZN6google8protobuf8internal24GeneratedExtensionFinder4FindEiPNS1_13ExtensionInfoE
 * Demangled: google::protobuf::internal::GeneratedExtensionFinder::Find(int,google::protobuf::internal::ExtensionInfo *)
 *
 * Callers: 1
 *   0x00000000004D8134  google::protobuf::internal::ExtensionFinder::~ExtensionFinder()
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000004D8138 string=0x00000000004D813C "\tA@"
 *   insn=0x00000000004D8140 string=0x00000000004D8144 ""
 *   insn=0x00000000004D8144 string=0x00000000004D8148 "*"
 *   insn=0x00000000004D8148 string=0x00000000004D814C "\t"
 *   insn=0x00000000004D814C string=0x00000000004D8150 ")"
 *   insn=0x00000000004D8150 string=0x00000000004D8154 ")"
 *   insn=0x00000000004D8154 string=0x00000000004D8158 ",\t"
 *   insn=0x00000000004D815C string=0x00000000004D8160 "Iyi"
 *   insn=0x00000000004D8164 string=0x00000000004D8168 ","
 *   insn=0x00000000004D8170 string=0x00000000004D8174 ",\t@"
 *   insn=0x00000000004D8170 string=0x00000000004D8180 ")"
 *   insn=0x00000000004D8178 string=0x00000000004D817C " "
 *   insn=0x00000000004D817C string=0x00000000004D81A0 "Hyk"
 *   insn=0x00000000004D8180 string=0x00000000004D8184 ")"
 *   insn=0x00000000004D81A0 string=0x00000000004D81A4 "?"
 *   insn=0x00000000004D81A8 string=0x00000000004D81AC " \t"
 *   insn=0x00000000004D81B0 string=0x00000000004D81B4 "@"
 *   insn=0x00000000004D81B4 string=0x00000000004D81B8 " "
 *   insn=0x00000000004D81B8 string=0x00000000004D81BC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::GeneratedExtensionFinder::Find(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v3; // x8
  __int64 v4; // x10
  unsigned __int64 v5; // x11
  __int64 v6; // x9
  __int64 result; // x0

  if ( !qword_6EA080 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(qword_6EA080 + 8);
  v5 = *(_QWORD *)(qword_6EA080 + 16);
  v6 = *(_QWORD *)(v4 + 8 * ((0xFFFF * v3 + a2) % v5));
  if ( !v6 )
    return 0;
  while ( *(_QWORD *)v6 != v3 || *(_DWORD *)(v6 + 8) != a2 )
  {
    v6 = *(_QWORD *)(v6 + 48);
    if ( !v6 )
      return 0;
  }
  if ( v6 == *(_QWORD *)(v4 + 8 * v5) )
    return 0;
  result = 1;
  a3[1] = *(_OWORD *)(v6 + 32);
  *a3 = *(_OWORD *)(v6 + 16);
  return result;
}

