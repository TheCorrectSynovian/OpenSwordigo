/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CDA0
 * Mangled: _ZN5Caver25EntityControllerComponent15SetTargetObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::EntityControllerComponent::SetTargetObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x000000000026CDA8 string=0x000000000026CDAC "*\t@"
 *   insn=0x000000000026CDAC string=0x000000000026CDB0 "J"
 *   insn=0x000000000026CDB0 string=0x000000000026CDB4 "*\t"
 *   insn=0x000000000026CDB8 string=0x000000000026CDBC "\ty"
 *   insn=0x000000000026CDC0 string=0x000000000026CDC4 "@"
 *   insn=0x000000000026CDC4 string=0x000000000026CDC8 ""
 *   insn=0x000000000026CDC8 string=0x000000000026CDCC ""
 *   insn=0x000000000026CDCC string=0x000000000026CDD0 "@"
 *   insn=0x000000000026CDD0 string=0x000000000026CDD8 ""
 *   insn=0x000000000026CDDC string=0x000000000026CDE0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::EntityControllerComponent::SetTargetObject(__int64 a1, __int64 *a2)
{
  __int64 v2; // x9
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)(a1 + 240);
  *(_QWORD *)(a1 + 240) = v2;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

