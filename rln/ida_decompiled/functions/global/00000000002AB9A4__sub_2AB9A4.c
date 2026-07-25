/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AB9A4
 * Mangled: sub_2AB9A4
 * Demangled: sub_2AB9A4
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBC30  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FBEC0  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002AC15C  Caver::ParticleEmitterComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 149
 *   insn=0x00000000002AB9B4 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002AB9BC string=0x00000000002AB9C0 "tC"
 *   insn=0x00000000002AB9C0 string=0x00000000002AB9C4 "`"
 *   insn=0x00000000002AB9C0 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002AB9D4 string=0x00000000001FBCD0 "0'"
 *   insn=0x00000000002AB9E4 string=0x00000000001F8520 "0'"
 *   insn=0x00000000002AB9F4 string=0x00000000002ABA70 "v"
 *   insn=0x00000000002AB9FC string=0x00000000002ABA30 "v"
 *   insn=0x00000000002ABA04 string=0x00000000002ABA08 "\t@"
 *   insn=0x00000000002ABA10 string=0x00000000002ABA14 ""
 *   insn=0x00000000002ABA24 string=0x00000000002ABA28 "@"
 *   insn=0x00000000002ABA34 string=0x00000000002ABA38 "4"
 *   insn=0x00000000002ABA40 string=0x00000000002ABA44 ""
 *   insn=0x00000000002ABA48 string=0x00000000002ABA4C ""
 *   insn=0x00000000002ABA84 string=0x00000000002ABA88 "BC"
 *   insn=0x00000000002ABA88 string=0x00000000002ABA8C ""
 *   insn=0x00000000002ABA90 string=0x00000000002ABA94 "@"
 *   insn=0x00000000002ABAA0 string=0x00000000002ABAA4 ""
 *   insn=0x00000000002ABAB4 string=0x00000000002ABAB8 "\t@"
 *   insn=0x00000000002ABAC0 string=0x00000000002ABAC4 ""
 *   insn=0x00000000002ABAD4 string=0x00000000002ABAD8 "@"
 *   insn=0x00000000002ABAE4 string=0x00000000002ABAE8 "6"
 *   insn=0x00000000002ABAEC string=0x00000000002ABAF0 ""
 *   insn=0x00000000002ABAFC string=0x00000000002ABB00 "\t@"
 *   insn=0x00000000002ABB0C string=0x00000000002ABB10 ""
 *   insn=0x00000000002ABB1C string=0x00000000002ABB20 "@"
 *   insn=0x00000000002ABB2C string=0x00000000002ABB30 "eW"
 *   insn=0x00000000002ABB4C string=0x00000000002ABB50 "V"
 *   insn=0x00000000002ABB58 string=0x00000000002ABB5C "!>"
 *   insn=0x00000000002ABB64 string=0x00000000002ABB68 "\nC"
 *   insn=0x00000000002ABB78 string=0x00000000002ABB7C "U@"
 *   insn=0x00000000002ABB88 string=0x00000000002ABB8C "e2"
 *   insn=0x00000000002ABB90 string=0x00000000002ABB94 "4"
 *   insn=0x00000000002ABBAC string=0x00000000002ABBB0 "\t@"
 *   insn=0x00000000002ABBB8 string=0x00000000002ABBBC ""
 *   insn=0x00000000002ABBCC string=0x00000000002ABBD0 "@"
 *   insn=0x00000000002ABBE4 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000002ABC20 string=0x00000000002ABC24 "h"
 *   insn=0x00000000002ABC24 string=0x00000000002ABC28 ""
 *   insn=0x00000000002ABC28 string=0x00000000002ABC2C "h"
 *   insn=0x00000000002ABC38 string=0x00000000001F3BC0 "P'"
 *   insn=0x00000000002ABC44 string=0x00000000002ABC48 "h"
 *   insn=0x00000000002ABC48 string=0x00000000002ABC4C ""
 *   insn=0x00000000002ABC4C string=0x00000000002ABC50 "h"
 *   insn=0x00000000002ABC50 string=0x00000000002ABC54 "!"
 *   insn=0x00000000002ABC54 string=0x00000000002ABC58 "h"
 *   insn=0x00000000002ABC5C string=0x00000000002ABC60 "\t@"
 *   insn=0x00000000002ABC64 string=0x00000000002ABC68 "h\n@"
 *   insn=0x00000000002ABC68 string=0x00000000002ABC6C ""
 *   insn=0x00000000002ABC6C string=0x00000000002ABC70 "h\n"
 *   insn=0x00000000002ABC70 string=0x00000000002ABC74 "!"
 *   insn=0x00000000002ABC74 string=0x00000000002ABC78 "h"
 *   insn=0x00000000002ABC7C string=0x00000000002ABC80 "@"
 *   insn=0x00000000002ABCC4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002ABCC8 string=0x00000000002ABCCC "3"
 *   insn=0x00000000002ABCCC string=0x00000000002ABCD0 "h"
 *   insn=0x00000000002ABCD0 string=0x00000000002ABCD4 ""
 *   insn=0x00000000002ABCD4 string=0x00000000002ABCD8 "h"
 *   insn=0x00000000002ABCDC string=0x00000000002ABCE0 "h"
 *   insn=0x00000000002ABCE0 string=0x00000000002ABCE4 "\t@"
 *   insn=0x00000000002ABCEC string=0x00000000002ABCF0 "h\n@"
 *   insn=0x00000000002ABCF0 string=0x00000000002ABCF4 ""
 *   insn=0x00000000002ABCF4 string=0x00000000002ABCF8 "h\n"
 *   insn=0x00000000002ABCFC string=0x00000000002ABD00 "h"
 *   insn=0x00000000002ABD00 string=0x00000000002ABD04 "@"
 *   insn=0x00000000002ABD38 string=0x00000000002ABD3C "`"
 *   insn=0x00000000002ABD6C string=0x00000000002ABDE8 "v"
 *   insn=0x00000000002ABD74 string=0x00000000002ABDA8 "v"
 *   insn=0x00000000002ABD7C string=0x00000000002ABD80 "\t@"
 *   insn=0x00000000002ABD88 string=0x00000000002ABD8C ""
 *   insn=0x00000000002ABD9C string=0x00000000002ABDA0 "@"
 *   insn=0x00000000002ABDAC string=0x00000000002ABDB0 "4"
 *   insn=0x00000000002ABDB8 string=0x00000000002ABDBC ""
 *   insn=0x00000000002ABDC0 string=0x00000000002ABDC4 ""
 *   insn=0x00000000002ABE08 string=0x00000000002ABE0C "i"
 *   insn=0x00000000002ABE0C string=0x00000000002ABE10 " Yh"
 *   insn=0x00000000002ABE18 string=0x00000000002ABE1C ")"
 *   insn=0x00000000002ABE24 string=0x00000000002ABE28 " "
 *   insn=0x00000000002ABE30 string=0x00000000002ABE34 "6"
 *   insn=0x00000000002ABE30 string=0x00000000001FC5A0 "0'"
 *   insn=0x00000000002ABE38 string=0x00000000002ABE3C ""
 *   insn=0x00000000002ABE4C string=0x00000000002ABE50 "\t@"
 *   insn=0x00000000002ABE58 string=0x00000000002ABE5C ""
 *   insn=0x00000000002ABE6C string=0x00000000002ABE70 "@"
 *   insn=0x00000000002ABE80 string=0x00000000002ABE84 "6"
 *   insn=0x00000000002ABE88 string=0x00000000002ABE8C ""
 *   insn=0x00000000002ABE98 string=0x00000000002ABE9C "\t@"
 *   insn=0x00000000002ABEA8 string=0x00000000002ABEAC ""
 *   insn=0x00000000002ABEB8 string=0x00000000002ABEBC "@"
 *   insn=0x00000000002ABEC8 string=0x00000000002ABECC "~V"
 *   insn=0x00000000002ABEE8 string=0x00000000002ABEEC "=="
 *   insn=0x00000000002ABEF4 string=0x00000000002ABEF8 "&B"
 *   insn=0x00000000002ABEF8 string=0x00000000002ABEFC "`"
 *   insn=0x00000000002ABF08 string=0x00000000002ABF0C "q?"
 *   insn=0x00000000002ABF28 string=0x00000000002ABF2C "3"
 *   insn=0x00000000002ABF2C string=0x00000000002ABF30 "h"
 *   insn=0x00000000002ABF2C string=0x00000000002ABFB0 "6"
 *   insn=0x00000000002ABF34 string=0x00000000002ABF38 "h"
 *   insn=0x00000000002ABF34 string=0x00000000002ABF68 "v"
 *   insn=0x00000000002ABF3C string=0x00000000002ABF40 "\t@"
 *   insn=0x00000000002ABF44 string=0x00000000002ABF48 "h\n@"
 *   insn=0x00000000002ABF48 string=0x00000000002ABF4C ""
 *   insn=0x00000000002ABF4C string=0x00000000002ABF50 "h\n"
 *   insn=0x00000000002ABF54 string=0x00000000002ABF58 "h"
 *   insn=0x00000000002ABF5C string=0x00000000002ABF60 "@"
 *   insn=0x00000000002ABF6C string=0x00000000002ABF70 "s"
 *   insn=0x00000000002ABF70 string=0x00000000002ABF74 "h"
 *   insn=0x00000000002ABF78 string=0x00000000002ABF7C ""
 *   insn=0x00000000002ABF7C string=0x00000000002ABF80 "h"
 *   insn=0x00000000002ABF8C string=0x00000000002ABF90 "P?"
 *   insn=0x00000000002ABFC4 string=0x00000000002ABFC8 "B?"
 *   insn=0x00000000002ABFD8 string=0x00000000002ABFDC ""
 *   insn=0x00000000002ABFE4 string=0x00000000002ABFE8 "Y6"
 *   insn=0x00000000002ABFE8 string=0x00000000002ABFEC "W"
 *   insn=0x00000000002ABFEC string=0x00000000002ABFF0 "h"
 *   insn=0x00000000002ABFF0 string=0x00000000002ABFF4 ""
 *   insn=0x00000000002ABFF4 string=0x00000000002ABFF8 "h"
 *   insn=0x00000000002ABFFC string=0x00000000002AC000 "h"
 *   insn=0x00000000002AC004 string=0x00000000002AC008 "\t@"
 *   insn=0x00000000002AC00C string=0x00000000002AC010 "h\n@"
 *   insn=0x00000000002AC010 string=0x00000000002AC014 ""
 *   insn=0x00000000002AC014 string=0x00000000002AC018 "h\n"
 *   insn=0x00000000002AC01C string=0x00000000002AC020 "h"
 *   insn=0x00000000002AC024 string=0x00000000002AC028 "@"
 *   insn=0x00000000002AC034 string=0x00000000002AC038 "@"
 *   insn=0x00000000002AC04C string=0x00000000002AC050 "H1"
 *   insn=0x00000000002AC050 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002AC058 string=0x00000000002AC05C "h"
 *   insn=0x00000000002AC064 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002AC070 string=0x00000000002AC074 ""
 *   insn=0x00000000002AC09C string=0x00000000002AC0A0 "Y6"
 *   insn=0x00000000002AC0B0 string=0x00000000002AC0C0 "h"
 *   insn=0x00000000002AC0B8 string=0x00000000002AC0BC "7"
 *   insn=0x00000000002AC0C0 string=0x00000000002AC0C4 ""
 *   insn=0x00000000002AC0C4 string=0x00000000002AC0C8 "h"
 *   insn=0x00000000002AC0CC string=0x00000000002AC0D0 "h"
 *   insn=0x00000000002AC0D0 string=0x00000000002AC0D4 "\t@"
 *   insn=0x00000000002AC0DC string=0x00000000002AC0E0 "h\n@"
 *   insn=0x00000000002AC0E0 string=0x00000000002AC0E4 ""
 *   insn=0x00000000002AC0E4 string=0x00000000002AC0E8 "h\n"
 *   insn=0x00000000002AC0EC string=0x00000000002AC0F0 "h"
 *   insn=0x00000000002AC0F0 string=0x00000000002AC0F4 "@"
 *   insn=0x00000000002AC11C string=0x00000000002AC120 "0%"
 *   insn=0x00000000002AC120 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AC124 string=0x00000000002AC128 "f?"
 *   insn=0x00000000002AC128 string=0x00000000001FBEC0 "0'"
 *   insn=0x00000000002AC134 string=0x00000000001FBC30 "0'"
 *   insn=0x00000000002AC14C string=0x00000000002AC150 "X,"
 *   insn=0x00000000002AC150 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2AB9A4(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x21
  _QWORD *v6; // x20
  __int64 v7; // x22
  __int64 v8; // x8
  _QWORD *v9; // x20
  __int64 v10; // x21
  __int64 v11; // t2
  char v12; // w22
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( !v2 )
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
    return 0;
  }
  v3 = *v2;
  Caver::ProgramState::IntAtStackIndex(v1, 2);
  if ( v3 )
  {
    Caver::SceneObject::ComponentWithIdentifier(v3);
    v5 = v4;
    if ( v4 )
    {
      v7 = *(_QWORD *)(v4 + 344);
      v6 = *(_QWORD **)(v4 + 352);
      if ( !v6 )
      {
        if ( !v7 )
          return 0;
        v10 = *(_QWORD *)(v4 + 344);
        v9 = 0;
        goto LABEL_15;
      }
      if ( !v6[1] )
      {
        (*(void (__fastcall **)(_QWORD))(*v6 + 16LL))(*(_QWORD *)(v4 + 352));
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
      if ( v7 )
      {
        v11 = v5 + 344;
        v10 = *(_QWORD *)(v5 + 344);
        v9 = *(_QWORD **)(v11 + 8);
        if ( v9 )
        {
          v12 = 0;
          ++v9[1];
LABEL_16:
          Caver::ProgramState::PointerAtStackIndex(v1);
          *(_QWORD *)(v10 + 56) = *(_QWORD *)v14;
          *(_DWORD *)(v10 + 64) = *(_DWORD *)(v14 + 8);
          if ( (v12 & 1) == 0 )
          {
            v15 = v9[1] - 1LL;
            v9[1] = v15;
            if ( !v15 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
              v16 = v9[2] - 1LL;
              v9[2] = v16;
              if ( !v16 )
                (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
            }
          }
          return 0;
        }
LABEL_15:
        v12 = 1;
        goto LABEL_16;
      }
    }
  }
  return 0;
}

