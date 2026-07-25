/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021394C
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponentC2Ev
 * Demangled: Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Callers: 2
 *   0x00000000001F3AB0  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *   0x00000000001FD580  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Callees: 13
 *   0x00000000001F52A0  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F8310  Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FD250  Caver::SceneGridEntry::~SceneGridEntry()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000213DCC  Caver::BoneControlledCollisionShapeComponent::InitWithComponent(Caver::BoneControlledCollisionShapeComponent const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 117
 *   insn=0x000000000021395C string=0x0000000000213960 "T"
 *   insn=0x000000000021396C string=0x0000000000213970 "L"
 *   insn=0x0000000000213970 string=0x00000000001F52A0 "P'"
 *   insn=0x0000000000213974 string=0x0000000000213978 "yA"
 *   insn=0x0000000000213984 string=0x0000000000213988 "\tA"
 *   insn=0x0000000000213988 string=0x000000000021398C "i"
 *   insn=0x0000000000213990 string=0x0000000000213994 "\nA"
 *   insn=0x0000000000213994 string=0x0000000000213998 "@"
 *   insn=0x000000000021399C string=0x00000000002139A0 "A"
 *   insn=0x00000000002139A0 string=0x00000000002139A4 "i"
 *   insn=0x00000000002139B8 string=0x00000000002139BC "`"
 *   insn=0x00000000002139C4 string=0x0000000000583810 "controllingModel"
 *   insn=0x00000000002139D0 string=0x00000000002139D4 "yL"
 *   insn=0x00000000002139D4 string=0x00000000002139D8 "cB"
 *   insn=0x00000000002139EC string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000213A00 string=0x0000000000213A04 "h"
 *   insn=0x0000000000213A2C string=0x0000000000213A30 ")=G"
 *   insn=0x0000000000213A30 string=0x0000000000213A34 "!"
 *   insn=0x0000000000213A38 string=0x0000000000213A3C "\t"
 *   insn=0x0000000000213A38 string=0x0000000000213A50 "\t"
 *   insn=0x0000000000213A3C string=0x0000000000213A40 "*"
 *   insn=0x0000000000213A40 string=0x0000000000213A44 "\n"
 *   insn=0x0000000000213A4C string=0x0000000000213A5C "?"
 *   insn=0x0000000000213A50 string=0x0000000000213A54 "*"
 *   insn=0x0000000000213A54 string=0x0000000000213A58 "\n"
 *   insn=0x0000000000213A64 string=0x0000000000213A68 "OZ"
 *   insn=0x0000000000213A70 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000213A80 string=0x0000000000213A84 "(a"
 *   insn=0x0000000000213A8C string=0x0000000000213AE0 "h"
 *   insn=0x0000000000213A90 string=0x0000000000213A94 "J=G"
 *   insn=0x0000000000213A94 string=0x0000000000213A98 ")!"
 *   insn=0x0000000000213A9C string=0x0000000000213AA0 "*"
 *   insn=0x0000000000213A9C string=0x0000000000213AB4 "*"
 *   insn=0x0000000000213AA0 string=0x0000000000213AA4 "K"
 *   insn=0x0000000000213AA4 string=0x0000000000213AA8 "+"
 *   insn=0x0000000000213AB0 string=0x0000000000213AC0 "_"
 *   insn=0x0000000000213AB4 string=0x0000000000213AB8 "K"
 *   insn=0x0000000000213AB8 string=0x0000000000213ABC "+"
 *   insn=0x0000000000213ACC string=0x0000000000213AD0 "5Z"
 *   insn=0x0000000000213AEC string=0x0000000000213B20 "`"
 *   insn=0x0000000000213AF0 string=0x0000000000213AF4 ")=G"
 *   insn=0x0000000000213AF4 string=0x0000000000213AF8 "!"
 *   insn=0x0000000000213AF8 string=0x0000000000213AFC "\t"
 *   insn=0x0000000000213AFC string=0x0000000000213B00 "\t"
 *   insn=0x0000000000213AFC string=0x0000000000213B5C "\t"
 *   insn=0x0000000000213B00 string=0x0000000000213B04 "*"
 *   insn=0x0000000000213B04 string=0x0000000000213B08 "\n"
 *   insn=0x0000000000213B0C string=0x0000000000213B10 "?"
 *   insn=0x0000000000213B10 string=0x0000000000213B14 "l"
 *   insn=0x0000000000213B18 string=0x0000000000213B1C ""Z"
 *   insn=0x0000000000213B24 string=0x0000000000213B28 "h"
 *   insn=0x0000000000213B2C string=0x0000000000213B30 "@"
 *   insn=0x0000000000213B30 string=0x0000000000213B34 ""
 *   insn=0x0000000000213B34 string=0x0000000000213B38 ""
 *   insn=0x0000000000213B3C string=0x0000000000213B40 ""
 *   insn=0x0000000000213B40 string=0x0000000000213B44 ""
 *   insn=0x0000000000213B50 string=0x00000000001F8310 "0'"
 *   insn=0x0000000000213B54 string=0x0000000000213B58 "["
 *   insn=0x0000000000213B5C string=0x0000000000213B60 "*"
 *   insn=0x0000000000213B60 string=0x0000000000213B64 "\n"
 *   insn=0x0000000000213B64 string=0x0000000000213B68 "?"
 *   insn=0x0000000000213B68 string=0x0000000000213B6C "m"
 *   insn=0x0000000000213B88 string=0x0000000000213B8C ""
 *   insn=0x0000000000213B90 string=0x0000000000213B94 "`B"
 *   insn=0x0000000000213B94 string=0x0000000000213B98 "\nA"
 *   insn=0x0000000000213B98 string=0x0000000000213B9C "\tA"
 *   insn=0x0000000000213B9C string=0x0000000000213BA0 "A"
 *   insn=0x0000000000213BA0 string=0x0000000000213BA4 "@"
 *   insn=0x0000000000213BA8 string=0x0000000000213BAC "i"
 *   insn=0x0000000000213BAC string=0x0000000000213BB0 "`"
 *   insn=0x0000000000213BB4 string=0x0000000000213BB8 "t"
 *   insn=0x0000000000213BB4 string=0x00000000001FD250 "0'"
 *   insn=0x0000000000213BB8 string=0x0000000000213BBC "4"
 *   insn=0x0000000000213BBC string=0x0000000000213C00 "`"
 *   insn=0x0000000000213BC0 string=0x0000000000213BC4 ""
 *   insn=0x0000000000213BD0 string=0x0000000000213BD4 "\t@"
 *   insn=0x0000000000213BE0 string=0x0000000000213BE4 ""
 *   insn=0x0000000000213BF0 string=0x0000000000213BF4 "@"
 *   insn=0x0000000000213C04 string=0x0000000000213C08 "`"
 *   insn=0x0000000000213C0C string=0x0000000000213C10 "`B"
 *   insn=0x0000000000213C18 string=0x0000000000213C1C "\tE"
 *   insn=0x0000000000213C1C string=0x0000000000213C20 "tB@"
 *   insn=0x0000000000213C20 string=0x0000000000213C24 "\n!"
 *   insn=0x0000000000213C24 string=0x0000000000213C28 "\tA"
 *   insn=0x0000000000213C28 string=0x0000000000213C2C "@"
 *   insn=0x0000000000213C2C string=0x0000000000213C30 "!"
 *   insn=0x0000000000213C34 string=0x0000000000213C38 "i"
 *   insn=0x0000000000213C38 string=0x0000000000213C3C "`"
 *   insn=0x0000000000213C3C string=0x0000000000213C40 "4"
 *   insn=0x0000000000213C44 string=0x0000000000213C48 ""
 *   insn=0x0000000000213C54 string=0x0000000000213C58 "\t@"
 *   insn=0x0000000000213C64 string=0x0000000000213C68 ""
 *   insn=0x0000000000213C74 string=0x0000000000213C78 "@"
 *   insn=0x0000000000213C94 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000213CA0 string=0x0000000000213CA4 "@"
 *   insn=0x0000000000213CB0 string=0x0000000000213D18 "`"
 *   insn=0x0000000000213CC0 string=0x0000000000213D28 "`B"
 *   insn=0x0000000000213CC8 string=0x0000000000213D20 "`"
 *   insn=0x0000000000213CD0 string=0x0000000000213CD4 "5"
 *   insn=0x0000000000213CD8 string=0x0000000000213CDC ""
 *   insn=0x0000000000213CE8 string=0x0000000000213CEC "\t@"
 *   insn=0x0000000000213CF8 string=0x0000000000213CFC ""
 *   insn=0x0000000000213D08 string=0x0000000000213D0C "@"
 *   insn=0x0000000000213D30 string=0x0000000000213D34 "\tE"
 *   insn=0x0000000000213D34 string=0x0000000000213D38 "uB@"
 *   insn=0x0000000000213D38 string=0x0000000000213D3C "\n!"
 *   insn=0x0000000000213D3C string=0x0000000000213D40 "\tA"
 *   insn=0x0000000000213D40 string=0x0000000000213D44 "@"
 *   insn=0x0000000000213D44 string=0x0000000000213D48 "!"
 *   insn=0x0000000000213D4C string=0x0000000000213D50 "i"
 *   insn=0x0000000000213D50 string=0x0000000000213D54 "`"
 *   insn=0x0000000000213D54 string=0x0000000000213D58 "5"
 *   insn=0x0000000000213D5C string=0x0000000000213D60 ""
 *   insn=0x0000000000213D6C string=0x0000000000213D70 "\t@"
 *   insn=0x0000000000213D7C string=0x0000000000213D80 ""
 *   insn=0x0000000000213D8C string=0x0000000000213D90 "@"
 *   insn=0x0000000000213DC4 string=0x0000000000213DC8 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(
        Caver::BoneControlledCollisionShapeComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+38h] [xbp-38h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::CollisionShapeComponent::CollisionShapeComponent(this);
  *(_QWORD *)this = off_6B9280;
  *(_QWORD *)&v2 = &off_6B93C0;
  *((_QWORD *)this + 58) = off_6B9438;
  *((_QWORD *)&v2 + 1) = &off_6B9400;
  *((_QWORD *)this + 60) = 0;
  *((_QWORD *)this + 61) = &byte_6FD2F8;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 62) = 0;
  *((_OWORD *)this + 1) = v2;
  *((_DWORD *)this + 126) = 0;
  sub_566BB8((int)v6, "controllingModel");
  Caver::Component::BindOutlet();
  v3 = (void *)(v6[0] - 24LL);
  if ( (__int64 *)(v6[0] - 24LL) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v6[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  *((_BYTE *)this + 377) = 1;
}

