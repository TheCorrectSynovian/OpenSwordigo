/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1424
 * Mangled: _ZN5Caver12ProgramState15SetParentObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::ProgramState::SetParentObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 2
 *   0x00000000001FDDB0  Caver::ProgramState::SetParentObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000004C133C  Caver::ProgramState::CreateChildState(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000004C142C string=0x00000000004C1430 "*\t@"
 *   insn=0x00000000004C1430 string=0x00000000004C1434 "J"
 *   insn=0x00000000004C1434 string=0x00000000004C1438 "*\t"
 *   insn=0x00000000004C143C string=0x00000000004C1440 "\t"
 *   insn=0x00000000004C1444 string=0x00000000004C1448 "@"
 *   insn=0x00000000004C1448 string=0x00000000004C144C ""
 *   insn=0x00000000004C144C string=0x00000000004C1450 ""
 *   insn=0x00000000004C1450 string=0x00000000004C1454 "@"
 *   insn=0x00000000004C1454 string=0x00000000004C145C ""
 *   insn=0x00000000004C1460 string=0x00000000004C1464 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ProgramState::SetParentObject(__int64 a1, __int64 *a2)
{
  __int64 v2; // x9
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v2;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

