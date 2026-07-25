/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004657C0
 * Mangled: _ZN5Caver5Scene20RegisterNewComponentERKN5boost13intrusive_ptrINS_9ComponentEEE
 * Demangled: Caver::Scene::RegisterNewComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callers: 1
 *   0x0000000000200F20  Caver::Scene::RegisterNewComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 7
 *   insn=0x00000000004657D8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004657DC string=0x00000000004657E0 ""
 *   insn=0x00000000004657E4 string=0x00000000004657E8 "\t\t@"
 *   insn=0x00000000004657E8 string=0x00000000004657EC ")"
 *   insn=0x00000000004657EC string=0x00000000004657F0 "\t\t"
 *   insn=0x00000000004657FC string=0x0000000000465800 "k"
 *   insn=0x0000000000465800 string=0x000000000052A9AC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::RegisterNewComponent(__int64 a1, __int64 *a2)
{
  __int64 v3; // x0
  __int64 v4; // x8

  v3 = operator new(0x18u);
  v4 = *a2;
  *(_QWORD *)(v3 + 16) = *a2;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  return sub_52A9AC();
}

