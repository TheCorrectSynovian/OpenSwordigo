/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022AECC
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent11DestroyLinkEv
 * Demangled: Caver::ObjectLinkControllerComponent::DestroyLink(void)
 *
 * Callers: 1
 *   0x00000000001F9EC0  Caver::ObjectLinkControllerComponent::DestroyLink(void)
 *
 * Callees: 1
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Referenced strings: 32
 *   insn=0x000000000022AED8 string=0x000000000022AEDC "`"
 *   insn=0x000000000022AEE4 string=0x000000000022AEE8 "@"
 *   insn=0x000000000022AEE4 string=0x000000000022AF04 "`F@"
 *   insn=0x000000000022AEE8 string=0x000000000022AEEC ""
 *   insn=0x000000000022AEEC string=0x000000000022AEF0 ""
 *   insn=0x000000000022AEF4 string=0x000000000022AEF8 ""
 *   insn=0x000000000022AEF8 string=0x000000000022AEFC ""
 *   insn=0x000000000022AF10 string=0x000000000022AF14 "@"
 *   insn=0x000000000022AF10 string=0x000000000022AF30 "`R@"
 *   insn=0x000000000022AF14 string=0x000000000022AF18 ""
 *   insn=0x000000000022AF18 string=0x000000000022AF1C ""
 *   insn=0x000000000022AF20 string=0x000000000022AF24 ""
 *   insn=0x000000000022AF24 string=0x000000000022AF28 ""
 *   insn=0x000000000022AF38 string=0x000000000022AF3C "@"
 *   insn=0x000000000022AF38 string=0x000000000022AF4C "`>@"
 *   insn=0x000000000022AF3C string=0x000000000022AF40 ""
 *   insn=0x000000000022AF40 string=0x000000000022AF44 ""
 *   insn=0x000000000022AF44 string=0x000000000022AF48 "@"
 *   insn=0x000000000022AF48 string=0x000000000022AF70 ""
 *   insn=0x000000000022AF50 string=0x000000000022AF54 "a"
 *   insn=0x000000000022AF54 string=0x000000000022AF58 "("
 *   insn=0x000000000022AF5C string=0x000000000022AF60 "@"
 *   insn=0x000000000022AF70 string=0x000000000022AF74 ""
 *   insn=0x000000000022AF78 string=0x000000000022AF7C "`>@"
 *   insn=0x000000000022AF8C string=0x000000000022AF90 "`>@"
 *   insn=0x000000000022AF8C string=0x00000000001FDFE0 "0'"
 *   insn=0x000000000022AF94 string=0x000000000022AF98 "`"
 *   insn=0x000000000022AF98 string=0x000000000022AF9C "@"
 *   insn=0x000000000022AF9C string=0x000000000022AFA0 ""
 *   insn=0x000000000022AFA0 string=0x000000000022AFA4 ""
 *   insn=0x000000000022AFA8 string=0x000000000022AFAC ""
 *   insn=0x000000000022AFB8 string=0x000000000022AFBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::ObjectLinkControllerComponent::DestroyLink(
        Caver::ObjectLinkControllerComponent *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  Caver::SceneObject *result; // x0
  Caver::SceneObject *v9; // x1
  int v10; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_DWORD *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 17) = 0;
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (_DWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0;
  if ( v6 && (v7 = v6[2] - 1, (v6[2] = v7) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    result = (Caver::SceneObject *)*((_QWORD *)this + 15);
    if ( !result )
      return result;
  }
  else
  {
    result = (Caver::SceneObject *)*((_QWORD *)this + 15);
    if ( !result )
      return result;
  }
  v9 = (Caver::SceneObject *)*((_QWORD *)this + 5);
  if ( *((Caver::SceneObject **)v9 + 6) == result )
  {
    Caver::SceneObject::RemoveChildObject(result, v9, 1);
    result = (Caver::SceneObject *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0;
    if ( result )
    {
      v10 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v10;
      if ( !v10 )
        return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

