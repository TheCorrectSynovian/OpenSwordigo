/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236620
 * Mangled: _ZN5Caver21ShadowVolumeComponent8SetModelERKN5boost13intrusive_ptrINS_14ModelComponentEEE
 * Demangled: Caver::ShadowVolumeComponent::SetModel(boost::intrusive_ptr<Caver::ModelComponent> const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x0000000000236628 string=0x000000000023662C "*\t@"
 *   insn=0x000000000023662C string=0x0000000000236630 "J"
 *   insn=0x0000000000236630 string=0x0000000000236634 "*\t"
 *   insn=0x0000000000236638 string=0x000000000023663C "\t9"
 *   insn=0x0000000000236640 string=0x0000000000236644 "@"
 *   insn=0x0000000000236644 string=0x0000000000236648 ""
 *   insn=0x0000000000236648 string=0x000000000023664C ""
 *   insn=0x000000000023664C string=0x0000000000236650 "@"
 *   insn=0x0000000000236650 string=0x0000000000236658 ""
 *   insn=0x000000000023665C string=0x0000000000236660 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ShadowVolumeComponent::SetModel(__int64 a1, __int64 *a2)
{
  __int64 v2; // x9
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v2;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

