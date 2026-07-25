/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000465578
 * Mangled: _ZN5Caver5Scene14ActivateObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 2
 *   0x00000000001FBC20  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000465578  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8C50  Caver::SceneObject::isHidden(void)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FF670  Caver::SceneObject::RegisterComponentInterfaces(Caver::ComponentManager *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x0000000000465590 string=0x0000000000465594 "V"
 *   insn=0x00000000004655A4 string=0x00000000004655A8 "`"
 *   insn=0x00000000004655AC string=0x00000000004655B0 ""
 *   insn=0x00000000004655E8 string=0x00000000004655EC "`"
 *   insn=0x00000000004655E8 string=0x00000000001F8C50 "0'"
 *   insn=0x00000000004655EC string=0x00000000004655F8 "h"
 *   insn=0x00000000004655F0 string=0x00000000004655F4 "H"
 *   insn=0x00000000004655F8 string=0x00000000004655FC "\t"
 *   insn=0x0000000000465608 string=0x000000000046560C "\t"
 *   insn=0x0000000000465614 string=0x0000000000465618 "h"
 *   insn=0x0000000000465614 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000465618 string=0x000000000046561C ""
 *   insn=0x0000000000465620 string=0x0000000000465624 "\t\t@"
 *   insn=0x0000000000465624 string=0x0000000000465628 ")"
 *   insn=0x0000000000465628 string=0x000000000046562C "\t\t"
 *   insn=0x0000000000465634 string=0x0000000000465638 "`"
 *   insn=0x0000000000465634 string=0x000000000052A9AC """
 *   insn=0x0000000000465640 string=0x0000000000465644 "`"
 *   insn=0x0000000000465650 string=0x0000000000465654 "h"
 *   insn=0x000000000046565C string=0x0000000000465660 "\t"
 *   insn=0x0000000000465660 string=0x0000000000465664 ""
 *   insn=0x0000000000465668 string=0x000000000046566C "\t"
 *   insn=0x0000000000465668 string=0x0000000000465680 "\t"
 *   insn=0x0000000000465674 string=0x0000000000465678 ""
 *   insn=0x0000000000465688 string=0x000000000046569C ""
 *   insn=0x0000000000465694 string=0x0000000000465698 "*"
 *   insn=0x00000000004656A0 string=0x00000000004656A4 "/A9H"
 *   insn=0x00000000004656A4 string=0x00000000004656A8 "H"
 *   insn=0x00000000004656A8 string=0x00000000004656AC "\tO@"
 *   insn=0x00000000004656A8 string=0x0000000000465670 "h"
 *   insn=0x00000000004656B0 string=0x00000000004656B4 "?"
 *   insn=0x00000000004656B8 string=0x00000000004656BC "\t;@"
 *   insn=0x00000000004656BC string=0x00000000004656C0 "O"
 *   insn=0x00000000004656C0 string=0x00000000004656C4 "?"
 *   insn=0x00000000004656C4 string=0x00000000004656C8 "K"
 *   insn=0x00000000004656CC string=0x00000000004656D0 "#@"
 *   insn=0x00000000004656E0 string=0x00000000004656E4 ""
 *   insn=0x00000000004656EC string=0x00000000004656F0 ""
 *   insn=0x0000000000465710 string=0x0000000000465714 ""
 *   insn=0x000000000046571C string=0x0000000000465730 ";"
 *   insn=0x0000000000465724 string=0x0000000000465728 ""
 *   insn=0x0000000000465730 string=0x0000000000465734 "9"
 *   insn=0x0000000000465734 string=0x0000000000465738 "?"
 *   insn=0x0000000000465744 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046574C string=0x0000000000465750 ""
 *   insn=0x000000000046575C string=0x0000000000465760 ""
 *   insn=0x000000000046576C string=0x0000000000465770 "Up"
 *   insn=0x0000000000465794 string=0x0000000000465798 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Scene::ActivateObject(__int64 a1, Caver::SceneObject **a2)
{
  Caver::SceneObject *v4; // x8
  __int64 v5; // x0
  Caver::SceneObject *v6; // x8
  __int64 v7; // x23
  int *v8; // x8
  __int64 v9; // x24
  int v10; // w8
  int v11; // w9
  __int64 v12; // x25
  __int64 v13; // x21
  int v14; // w8
  _QWORD v15[2]; // [xsp+20h] [xbp-50h] BYREF

  v15[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_DWORD *)*a2 + 59) != *(_DWORD *)(a1 + 784)
    && ((Caver::SceneObject::isHidden(*a2) & 1) == 0 || *(_BYTE *)(a1 + 10)) )
  {
    v4 = *a2;
    if ( !*((_BYTE *)*a2 + 240) )
    {
      *((_BYTE *)v4 + 240) = 1;
      v5 = operator new(0x18u);
      v6 = *a2;
      *(_QWORD *)(v5 + 16) = *a2;
      if ( v6 )
        ++*((_DWORD *)v6 + 2);
      sub_52A9AC();
      Caver::SceneObject::RegisterComponentInterfaces(*a2, (Caver::ComponentManager *)(a1 + 480));
      Caver::SceneObject::HandleMessage(*a2, 5, 0);
      v4 = *a2;
    }
    v7 = 0;
    *((_DWORD *)v4 + 59) = *(_DWORD *)(a1 + 784);
    v8 = (int *)*((_QWORD *)v4 + 5);
    if ( v8 )
      goto LABEL_12;
    while ( v7 < 0 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 8 * v7);
        if ( *(_BYTE *)(v9 + 75) )
        {
          v10 = *(_DWORD *)(a1 + 784);
          if ( *(_DWORD *)(v9 + 76) != v10 )
          {
            v11 = *(_DWORD *)(v9 + 56);
            *(_DWORD *)(v9 + 76) = v10;
            if ( v11 >= 1 )
            {
              v12 = 0;
              do
              {
                v13 = *(_QWORD *)(*(_QWORD *)(v9 + 64) + 8 * v12);
                v15[0] = v13;
                if ( v13 )
                  ++*(_DWORD *)(v13 + 8);
                if ( *(_BYTE *)(v13 + 243) && *(_DWORD *)(v13 + 236) != *(_DWORD *)(a1 + 784) )
                  Caver::Scene::ActivateObject(a1, v15);
                v14 = *(_DWORD *)(v13 + 8) - 1;
                *(_DWORD *)(v13 + 8) = v14;
                if ( !v14 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
                ++v12;
              }
              while ( v12 < *(int *)(v9 + 56) );
            }
          }
        }
        ++v7;
        v8 = (int *)*((_QWORD *)*a2 + 5);
        if ( !v8 )
          break;
LABEL_12:
        if ( v7 >= *v8 )
          return;
      }
    }
  }
}

