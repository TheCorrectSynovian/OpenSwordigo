/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBB68
 * Mangled: _ZN5Caver5Proto9Component4SwapEPS1_
 * Demangled: Caver::Proto::Component::Swap(Caver::Proto::Component*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA0E0  google::protobuf::internal::ExtensionSet::Swap(google::protobuf::internal::ExtensionSet*)
 *
 * Referenced strings: 27
 *   insn=0x00000000002FBB6C string=0x00000000002FBB70 "( @"
 *   insn=0x00000000002FBB70 string=0x00000000002FBB74 "\t @"
 *   insn=0x00000000002FBB74 string=0x00000000002FBB78 " "
 *   insn=0x00000000002FBB78 string=0x00000000002FBB7C "(H@"
 *   insn=0x00000000002FBB7C string=0x00000000002FBB80 ") "
 *   insn=0x00000000002FBB80 string=0x00000000002FBB84 "\tH@"
 *   insn=0x00000000002FBB84 string=0x00000000002FBB88 "H"
 *   insn=0x00000000002FBB88 string=0x00000000002FBB8C "(L@"
 *   insn=0x00000000002FBB8C string=0x00000000002FBB90 ")H"
 *   insn=0x00000000002FBB90 string=0x00000000002FBB94 "\tL@"
 *   insn=0x00000000002FBB94 string=0x00000000002FBB98 "L"
 *   insn=0x00000000002FBB98 string=0x00000000002FBB9C "((@"
 *   insn=0x00000000002FBB9C string=0x00000000002FBBA0 ")L"
 *   insn=0x00000000002FBBA0 string=0x00000000002FBBA4 "\t(@"
 *   insn=0x00000000002FBBA4 string=0x00000000002FBBA8 "("
 *   insn=0x00000000002FBBA8 string=0x00000000002FBBAC "(X@"
 *   insn=0x00000000002FBBAC string=0x00000000002FBBB0 ")("
 *   insn=0x00000000002FBBB0 string=0x00000000002FBBB4 "\tX@"
 *   insn=0x00000000002FBBB4 string=0x00000000002FBBB8 "X"
 *   insn=0x00000000002FBBB8 string=0x00000000002FBBBC "(8@"
 *   insn=0x00000000002FBBBC string=0x00000000002FBBC0 ")X"
 *   insn=0x00000000002FBBC0 string=0x00000000002FBBC4 "\t8@"
 *   insn=0x00000000002FBBC4 string=0x00000000002FBBC8 "8"
 *   insn=0x00000000002FBBC8 string=0x00000000002FBBCC "( "
 *   insn=0x00000000002FBBD0 string=0x00000000002FBBD4 ")8"
 *   insn=0x00000000002FBBD8 string=0x00000000002FBBDC "A"
 *   insn=0x00000000002FBBDC string=0x00000000001FA0E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Component::Swap(__int64 this, Caver::Proto::Component *a2)
{
  __int64 v2; // x9
  int v3; // w8
  int v4; // w8
  __int64 v5; // x8
  __int64 v6; // x9

  if ( a2 != (Caver::Proto::Component *)this )
  {
    v2 = *(_QWORD *)(this + 64);
    *(_QWORD *)(this + 64) = *((_QWORD *)a2 + 8);
    v3 = *((_DWORD *)a2 + 18);
    *((_QWORD *)a2 + 8) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 72);
    *(_DWORD *)(this + 72) = v3;
    v4 = *((_DWORD *)a2 + 19);
    *((_DWORD *)a2 + 18) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 76);
    *(_DWORD *)(this + 76) = v4;
    v5 = *((_QWORD *)a2 + 10);
    *((_DWORD *)a2 + 19) = v2;
    v6 = *(_QWORD *)(this + 80);
    *(_QWORD *)(this + 80) = v5;
    LODWORD(v5) = *((_DWORD *)a2 + 22);
    *((_QWORD *)a2 + 10) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 88);
    *(_DWORD *)(this + 88) = v5;
    LODWORD(v5) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 22) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = v5;
    *((_DWORD *)a2 + 14) = v6;
    return google::protobuf::internal::ExtensionSet::Swap(
             (google::protobuf::internal::ExtensionSet *)(this + 8),
             (Caver::Proto::Component *)((char *)a2 + 8));
  }
  return this;
}

