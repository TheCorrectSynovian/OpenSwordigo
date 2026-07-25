/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034A6BC
 * Mangled: _ZN5Caver19GameSceneController12UpdateTargetEv
 * Demangled: Caver::GameSceneController::UpdateTarget(void)
 *
 * Callers: 2
 *   0x00000000001F37D0  Caver::GameSceneController::UpdateTarget(void)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Callees: 4
 *   0x00000000001FFC00  Caver::TargetFrame::SetHealth(float)
 *   0x0000000000200450  Caver::TargetFrame::Hide(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 17
 *   insn=0x000000000034A6C8 string=0x000000000034A6CC "`"
 *   insn=0x000000000034A6D0 string=0x000000000034A6D4 ""
 *   insn=0x000000000034A6D0 string=0x000000000034A710 "h"
 *   insn=0x000000000034A6D8 string=0x000000000034A6DC ""
 *   insn=0x000000000034A6E4 string=0x000000000034A6E8 "!(B"
 *   insn=0x000000000034A6E8 string=0x000000000021C13C "@&"
 *   insn=0x000000000034A6EC string=0x000000000034A6F0 "h"
 *   insn=0x000000000034A6F0 string=0x000000000034A6F4 ""
 *   insn=0x000000000034A700 string=0x000000000034A704 "!"
 *   insn=0x000000000034A714 string=0x000000000034A718 "N"
 *   insn=0x000000000034A718 string=0x000000000034A71C "`"
 *   insn=0x000000000034A724 string=0x000000000034A728 "@"
 *   insn=0x000000000034A728 string=0x000000000034A72C ""
 *   insn=0x000000000034A72C string=0x000000000034A730 ""
 *   insn=0x000000000034A734 string=0x000000000034A744 ""
 *   insn=0x000000000034A750 string=0x000000000034A754 " "
 *   insn=0x000000000034A764 string=0x000000000034A768 "&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GameSceneController::UpdateTarget(Caver::GameSceneController *this)
{
  __int64 v2; // x0
  __int64 v3; // x0
  float v4; // s0
  _DWORD *result; // x0
  int v6; // w8

  v2 = *((_QWORD *)this + 46);
  if ( v2 && *(_BYTE *)(v2 + 240) && *(_QWORD *)(v2 + 32) )
  {
    v3 = Caver::SceneObject::ComponentWithInterface(
           (Caver::SceneObject *)v2,
           (__int64)Caver::HealthComponent::Interface);
    if ( v3 )
      v4 = (float)*(int *)(v3 + 128) / (float)*(int *)(v3 + 124);
    else
      v4 = 1.0;
    return (_DWORD *)Caver::TargetFrame::SetHealth(*(Caver::TargetFrame **)(*((_QWORD *)this + 6) + 520LL), v4);
  }
  else
  {
    Caver::TargetFrame::Hide(*(Caver::TargetFrame **)(*((_QWORD *)this + 6) + 520LL));
    result = (_DWORD *)*((_QWORD *)this + 46);
    *((_QWORD *)this + 46) = 0;
    if ( result )
    {
      v6 = result[2] - 1;
      result[2] = v6;
      if ( !v6 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

