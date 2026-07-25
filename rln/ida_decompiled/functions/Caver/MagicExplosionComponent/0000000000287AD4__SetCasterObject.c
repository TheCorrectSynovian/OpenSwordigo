/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000287AD4
 * Mangled: _ZN5Caver23MagicExplosionComponent15SetCasterObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::MagicExplosionComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000001F84D0  Caver::MagicExplosionComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x0000000000287ADC string=0x0000000000287AE0 "*\t@"
 *   insn=0x0000000000287AE0 string=0x0000000000287AE4 "J"
 *   insn=0x0000000000287AE4 string=0x0000000000287AE8 "*\t"
 *   insn=0x0000000000287AEC string=0x0000000000287AF0 "\t"
 *   insn=0x0000000000287AF4 string=0x0000000000287AF8 "@"
 *   insn=0x0000000000287AF8 string=0x0000000000287AFC ""
 *   insn=0x0000000000287AFC string=0x0000000000287B00 ""
 *   insn=0x0000000000287B00 string=0x0000000000287B04 "@"
 *   insn=0x0000000000287B04 string=0x0000000000287B0C ""
 *   insn=0x0000000000287B10 string=0x0000000000287B14 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::MagicExplosionComponent::SetCasterObject(__int64 a1, __int64 *a2)
{
  __int64 v2; // x9
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)(a1 + 384);
  *(_QWORD *)(a1 + 384) = v2;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

