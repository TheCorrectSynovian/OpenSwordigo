/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473B08
 * Mangled: _ZN5Caver11SceneObject28RegisterForWorldBoundsUpdateEv
 * Demangled: Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Callers: 1
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Callees: 5
 *   0x00000000001F4630  Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x0000000000473B14 string=0x0000000000473B18 "S"
 *   insn=0x0000000000473B18 string=0x0000000000473B1C "i"
 *   insn=0x0000000000473B2C string=0x0000000000473B6C "h"
 *   insn=0x0000000000473B30 string=0x0000000000473B34 "\t\t@"
 *   insn=0x0000000000473B34 string=0x0000000000473B38 ")"
 *   insn=0x0000000000473B38 string=0x0000000000473B3C "\t\t"
 *   insn=0x0000000000473B44 string=0x00000000001F4630 "P'"
 *   insn=0x0000000000473B4C string=0x0000000000473B50 "@"
 *   insn=0x0000000000473B50 string=0x0000000000473B54 ""
 *   insn=0x0000000000473B54 string=0x0000000000473B58 ""
 *   insn=0x0000000000473B5C string=0x0000000000473B60 ""
 *   insn=0x0000000000473B60 string=0x0000000000473B64 ""
 *   insn=0x0000000000473B8C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000473B94 string=0x0000000000473B98 "("
 *   insn=0x0000000000473B98 string=0x0000000000473B9C "\t\t@"
 *   insn=0x0000000000473B9C string=0x0000000000473BA0 ")"
 *   insn=0x0000000000473BA0 string=0x0000000000473BA4 "\t\t"
 *   insn=0x0000000000473BA8 string=0x0000000000473BAC "\t"
 *   insn=0x0000000000473BAC string=0x0000000000473BB0 ")"
 *   insn=0x0000000000473BB4 string=0x0000000000473BB8 " "
 *   insn=0x0000000000473BBC string=0x0000000000473BC0 "A7"
 *   insn=0x0000000000473BD8 string=0x0000000000473BDC "U"
 *   insn=0x0000000000473BEC string=0x0000000000473BF0 "kBB9*$@)K"
 *   insn=0x0000000000473BF0 string=0x0000000000473BF4 "*$@)K"
 *   insn=0x0000000000473BF4 string=0x0000000000473BF8 "K"
 *   insn=0x0000000000473BF8 string=0x0000000000473BFC "J"
 *   insn=0x0000000000473BF8 string=0x0000000000473C00 "`"
 *   insn=0x0000000000473C08 string=0x0000000000473C0C """
 *   insn=0x0000000000473C0C string=0x0000000000473C10 "`"
 *   insn=0x0000000000473C0C string=0x00000000001FC440 "0'"
 *   insn=0x0000000000473C14 string=0x0000000000473C18 "b:@"
 *   insn=0x0000000000473C18 string=0x0000000000473C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::SceneObject::RegisterForWorldBoundsUpdate(Caver::SceneObject *this)
{
  Caver::SceneObject *result; // x0
  int v3; // w8
  Caver::SceneObject *v4; // [xsp+40h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  result = (Caver::SceneObject *)*((_QWORD *)this + 4);
  if ( result )
  {
    v4 = this;
    ++*((_DWORD *)this + 2);
    Caver::Scene::RegisterObjectForWorldBoundsUpdate();
    result = v4;
    if ( v4 )
    {
      v3 = *((_DWORD *)v4 + 2) - 1;
      *((_DWORD *)v4 + 2) = v3;
      if ( !v3 )
        return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}

