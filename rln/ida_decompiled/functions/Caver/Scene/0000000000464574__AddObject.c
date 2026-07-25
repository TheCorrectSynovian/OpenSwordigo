/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000464574
 * Mangled: _ZN5Caver5Scene9AddObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA720  Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x00000000001FC170  Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *   0x00000000001FC980  Caver::SceneObject::FinishLoad(void)
 *   0x00000000001FDBD0  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *   0x00000000001FF5D0  Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *   0x0000000000202AE0  Caver::SceneObject::SetScene(Caver::Scene *)
 *   0x0000000000203D90  std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::operator[](std::string const&)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 84
 *   insn=0x000000000046458C string=0x0000000000464590 "X"
 *   insn=0x0000000000464590 string=0x0000000000464594 ""
 *   insn=0x00000000004645A0 string=0x00000000004645A4 "u"
 *   insn=0x00000000004645A8 string=0x00000000004645AC "("
 *   insn=0x00000000004645AC string=0x00000000004645B0 ""
 *   insn=0x00000000004645B0 string=0x00000000004645B4 "("
 *   insn=0x00000000004645B4 string=0x0000000000464638 "`"
 *   insn=0x00000000004645C0 string=0x00000000001FDBD0 "0'"
 *   insn=0x00000000004645CC string=0x00000000001FB490 "0'"
 *   insn=0x00000000004645D0 string=0x00000000004645D4 "\t"
 *   insn=0x00000000004645D4 string=0x00000000004645D8 ")"
 *   insn=0x00000000004645E0 string=0x00000000004645E4 "A"
 *   insn=0x00000000004645E4 string=0x00000000004645E8 "h"
 *   insn=0x00000000004645E4 string=0x000000000046478C "\t"
 *   insn=0x00000000004645F4 string=0x00000000004645F8 "i"
 *   insn=0x0000000000464600 string=0x0000000000464604 "*\t@"
 *   insn=0x0000000000464604 string=0x0000000000464608 "J"
 *   insn=0x0000000000464608 string=0x000000000046460C "*\t"
 *   insn=0x0000000000464610 string=0x0000000000464614 "\t"
 *   insn=0x0000000000464618 string=0x000000000046461C "@"
 *   insn=0x000000000046461C string=0x0000000000464620 ""
 *   insn=0x0000000000464620 string=0x0000000000464624 ""
 *   insn=0x0000000000464628 string=0x000000000046462C ""
 *   insn=0x000000000046462C string=0x0000000000464630 ""
 *   insn=0x000000000046463C string=0x0000000000464640 "(y"
 *   insn=0x0000000000464640 string=0x0000000000464644 "u"
 *   insn=0x0000000000464650 string=0x0000000000464654 "h"
 *   insn=0x0000000000464658 string=0x000000000046465C "ue"
 *   insn=0x000000000046465C string=0x00000000001FDC30 "0'"
 *   insn=0x0000000000464678 string=0x00000000001FC170 "0'"
 *   insn=0x0000000000464688 string=0x000000000046468C "h"
 *   insn=0x00000000004646A4 string=0x00000000004646A8 "h"
 *   insn=0x00000000004646AC string=0x00000000004646B0 "?"
 *   insn=0x00000000004646C0 string=0x00000000004646C4 " "
 *   insn=0x00000000004646C8 string=0x00000000004646CC ""
 *   insn=0x00000000004646CC string=0x00000000004646D0 "Q@"
 *   insn=0x00000000004646D4 string=0x00000000004646D8 " "
 *   insn=0x00000000004646D8 string=0x00000000004646DC "7"
 *   insn=0x00000000004646D8 string=0x00000000004646FC "9#"
 *   insn=0x00000000004646E4 string=0x00000000001FA720 "0'"
 *   insn=0x00000000004646FC string=0x0000000000464700 "_"
 *   insn=0x0000000000464708 string=0x000000000046470C "h"
 *   insn=0x000000000046470C string=0x0000000000464710 "`"
 *   insn=0x000000000046470C string=0x0000000000464718 "h"
 *   insn=0x0000000000464714 string=0x00000000001FC980 "0'"
 *   insn=0x0000000000464718 string=0x000000000046471C "\t"
 *   insn=0x0000000000464720 string=0x0000000000464754 ")@"
 *   insn=0x000000000046472C string=0x0000000000464730 "h"
 *   insn=0x000000000046472C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000464730 string=0x0000000000464734 ""
 *   insn=0x0000000000464738 string=0x000000000046473C "\t\t@"
 *   insn=0x000000000046473C string=0x0000000000464740 ")"
 *   insn=0x0000000000464740 string=0x0000000000464744 "\t\t"
 *   insn=0x000000000046474C string=0x000000000052A9AC """
 *   insn=0x0000000000464750 string=0x0000000000464760 ""
 *   insn=0x0000000000464754 string=0x0000000000464758 ""
 *   insn=0x0000000000464758 string=0x000000000046475C "H"
 *   insn=0x0000000000464768 string=0x000000000046476C "!"
 *   insn=0x000000000046478C string=0x0000000000464790 ")=G"
 *   insn=0x0000000000464790 string=0x0000000000464794 "!"
 *   insn=0x0000000000464798 string=0x000000000046479C "\t"
 *   insn=0x0000000000464798 string=0x00000000004647B0 "\t"
 *   insn=0x000000000046479C string=0x00000000004647A0 "*"
 *   insn=0x00000000004647A0 string=0x00000000004647A4 "\n"
 *   insn=0x00000000004647AC string=0x00000000004647BC "?"
 *   insn=0x00000000004647B0 string=0x00000000004647B4 "*"
 *   insn=0x00000000004647B4 string=0x00000000004647B8 "\n"
 *   insn=0x00000000004647BC string=0x00000000004647C0 "L"
 *   insn=0x00000000004647D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004647D4 string=0x00000000004647D8 "\n"
 *   insn=0x00000000004647D8 string=0x00000000004647DC "J"
 *   insn=0x00000000004647E0 string=0x00000000004647E4 "(a"
 *   insn=0x00000000004647EC string=0x00000000004647F0 "\n"
 *   insn=0x00000000004647F0 string=0x00000000004647F4 "J=G"
 *   insn=0x00000000004647F4 string=0x00000000004647F8 ")!"
 *   insn=0x00000000004647FC string=0x0000000000464800 "*"
 *   insn=0x00000000004647FC string=0x000000000046482C "*"
 *   insn=0x0000000000464800 string=0x0000000000464804 "K"
 *   insn=0x0000000000464804 string=0x0000000000464808 "+"
 *   insn=0x000000000046480C string=0x0000000000464810 "_"
 *   insn=0x0000000000464824 string=0x0000000000464828 "'t"
 *   insn=0x000000000046482C string=0x0000000000464830 "K"
 *   insn=0x0000000000464830 string=0x0000000000464834 "+"
 *   insn=0x0000000000464834 string=0x0000000000464838 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::AddObject(Caver::Scene *a1, Caver::SceneObject **a2)
{
  void *v4; // x0
  Caver::SceneObject **v5; // x0
  Caver::SceneObject *v6; // x9
  Caver::SceneObject **v7; // x8
  Caver::SceneObject *v8; // x0
  int v9; // w8
  Caver::SceneObject *v10; // x21
  float v11; // s0
  __int128 v12; // q0
  __int64 result; // x0
  Caver::CollisionShapeComponent **v14; // x25
  Caver::CollisionShapeComponent **i; // x26
  Caver::CollisionShapeComponent *v16; // x23
  __int64 v17; // x0
  Caver::SceneObject *v18; // x8
  unsigned int *v19; // x8
  int v20; // w9
  __int128 v21; // [xsp+0h] [xbp-60h] BYREF
  _DWORD v22[2]; // [xsp+10h] [xbp-50h] BYREF
  __int64 v23; // [xsp+18h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(*((_QWORD *)*a2 + 10) - 24LL) )
  {
    Caver::Scene::MakeUniqueObjectIdentifier();
    Caver::SceneObject::SetIdentifier();
    v4 = (void *)(v21 - 24);
    if ( (__int64 *)(v21 - 24) != &qword_6FD2E0 )
    {
      v19 = (unsigned int *)(v21 - 8);
      if ( &pthread_create )
      {
        do
          v20 = __ldaxr(v19);
        while ( __stlxr(v20 - 1, v19) );
      }
      else
      {
        v20 = (*v19)--;
      }
      if ( v20 <= 0 )
        operator delete(v4);
    }
    v5 = (Caver::SceneObject **)std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>>::operator[]();
    v6 = *a2;
    v7 = v5;
    if ( *a2 )
      ++*((_DWORD *)v6 + 2);
    v8 = *v5;
    *v7 = v6;
    if ( v8 )
    {
      v9 = *((_DWORD *)v8 + 2) - 1;
      *((_DWORD *)v8 + 2) = v9;
      if ( !v9 )
        (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  Caver::SceneObject::SetScene(*a2, a1);
  v10 = *a2;
  v21 = *(_OWORD *)((char *)*a2 + 148);
  if ( *((_BYTE *)v10 + 144) )
    Caver::Rectangle::FlipHorizontally((Caver::Rectangle *)&v21);
  v11 = *((float *)v10 + 32);
  v22[0] = *((_DWORD *)v10 + 35);
  v22[1] = v22[0];
  Caver::Rectangle::Transform(
    (Caver::Rectangle *)&v21,
    (Caver::SceneObject *)((char *)v10 + 112),
    v11,
    (const Caver::Vector2 *)v22);
  v12 = v21;
  *((_BYTE *)v10 + 180) = 0;
  *(_OWORD *)((char *)v10 + 164) = v12;
  result = Caver::SceneGrid::AddObject(
             (Caver::Scene *)((char *)a1 + 864),
             (Caver::SceneObject *)((char *)*a2 + 248),
             (Caver::SceneObject *)((char *)*a2 + 164),
             *((float *)*a2 + 30) + *((float *)*a2 + 46));
  v14 = (Caver::CollisionShapeComponent **)*((_QWORD *)*a2 + 24);
  for ( i = (Caver::CollisionShapeComponent **)*((_QWORD *)*a2 + 25); i != v14; ++v14 )
  {
    result = (*(__int64 (__fastcall **)(Caver::CollisionShapeComponent *, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)*v14 + 160LL))(
               *v14,
               Caver::CollisionShapeComponent::Interface);
    if ( (result & 1) != 0 )
    {
      v16 = *v14;
      Caver::CollisionShapeComponent::UpdateWorldAABB(*v14);
      result = Caver::SceneGrid::AddObject(
                 (Caver::Scene *)((char *)a1 + 928),
                 (Caver::CollisionShapeComponent *)((char *)v16 + 400),
                 (Caver::CollisionShapeComponent *)((char *)v16 + 360),
                 0.0);
    }
  }
  if ( *((_BYTE *)a1 + 8) )
    result = Caver::SceneObject::FinishLoad(*a2);
  if ( *((_BYTE *)*a2 + 241) || !*(_QWORD *)(*((_QWORD *)*a2 + 10) - 24LL) )
  {
    v17 = operator new(0x18u);
    v18 = *a2;
    *(_QWORD *)(v17 + 16) = *a2;
    if ( v18 )
      ++*((_DWORD *)v18 + 2);
    return sub_52A9AC();
  }
  return result;
}

