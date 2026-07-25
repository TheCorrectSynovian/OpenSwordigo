/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034D478
 * Mangled: _ZN5Caver19GameSceneController16RegisterTreasureERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::GameSceneController::RegisterTreasure(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000203160  Caver::GameSceneController::RegisterTreasure(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000034D478 string=0x000000000034D47C "\t"
 *   insn=0x000000000034D47C string=0x000000000034D480 ""
 *   insn=0x000000000034D480 string=0x000000000034D484 ""
 *   insn=0x000000000034D484 string=0x000000000034D488 "(A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneController::RegisterTreasure(__int64 result)
{
  __int64 v1; // x9
  int v2; // w8

  v1 = *(_QWORD *)(result + 24);
  v2 = *(_DWORD *)(result + 388) + 1;
  *(_DWORD *)(result + 388) = v2;
  *(_DWORD *)(v1 + 64) = v2;
  return result;
}

