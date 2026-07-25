/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000465380
 * Mangled: _ZN5Caver5Scene34RegisterObjectWaitingForActivationERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::RegisterObjectWaitingForActivation(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000001FEB20  Caver::Scene::RegisterObjectWaitingForActivation(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 7
 *   insn=0x0000000000465398 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046539C string=0x00000000004653A0 ""
 *   insn=0x00000000004653A4 string=0x00000000004653A8 "\t\t@"
 *   insn=0x00000000004653A8 string=0x00000000004653AC ")"
 *   insn=0x00000000004653AC string=0x00000000004653B0 "\t\t"
 *   insn=0x00000000004653BC string=0x00000000004653C0 "{"
 *   insn=0x00000000004653C0 string=0x000000000052A9AC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::RegisterObjectWaitingForActivation(__int64 a1, __int64 *a2)
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

