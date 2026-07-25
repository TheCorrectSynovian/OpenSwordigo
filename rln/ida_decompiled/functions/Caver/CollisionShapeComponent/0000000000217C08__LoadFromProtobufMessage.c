/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000217C08
 * Mangled: _ZN5Caver23CollisionShapeComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001FA400  Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 3
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FF8D0  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 49
 *   insn=0x0000000000217C1C string=0x0000000000217C20 ","
 *   insn=0x0000000000217C20 string=0x0000000000217C24 "jr@"
 *   insn=0x0000000000217C24 string=0x0000000000217C28 "i"
 *   insn=0x0000000000217C28 string=0x0000000000217C2C "j\n"
 *   insn=0x0000000000217C30 string=0x0000000000217C34 "\n"
 *   insn=0x0000000000217C30 string=0x0000000000217C40 "u"
 *   insn=0x0000000000217C34 string=0x0000000000217C38 "J"
 *   insn=0x0000000000217C38 string=0x0000000000217C3C "\n"
 *   insn=0x0000000000217C40 string=0x0000000000217C44 "i""
 *   insn=0x0000000000217C44 string=0x0000000000217C48 "5"
 *   insn=0x0000000000217C48 string=0x0000000000217C8C "h&"
 *   insn=0x0000000000217C4C string=0x0000000000217C50 ""
 *   insn=0x0000000000217C60 string=0x0000000000217C64 "\t@"
 *   insn=0x0000000000217C6C string=0x0000000000217C70 ""
 *   insn=0x0000000000217C80 string=0x0000000000217C84 "@"
 *   insn=0x0000000000217C8C string=0x0000000000217C90 "!F"
 *   insn=0x0000000000217C9C string=0x0000000000217CA0 "<"
 *   insn=0x0000000000217CA8 string=0x0000000000217CAC "h"
 *   insn=0x0000000000217CB0 string=0x0000000000217CB4 "h"
 *   insn=0x0000000000217CB4 string=0x0000000000217CC0 "h"
 *   insn=0x0000000000217CB8 string=0x0000000000217CBC "iR"
 *   insn=0x0000000000217CC4 string=0x0000000000217CC8 "iV"
 *   insn=0x0000000000217CCC string=0x0000000000217CD0 "i"
 *   insn=0x0000000000217CD4 string=0x0000000000217CD8 "i"
 *   insn=0x0000000000217CDC string=0x0000000000217CE0 "i"
 *   insn=0x0000000000217CE4 string=0x0000000000217CE8 "i"
 *   insn=0x0000000000217CEC string=0x0000000000217CF0 ")"
 *   insn=0x0000000000217CF0 string=0x0000000000217CF4 "?"
 *   insn=0x0000000000217CF8 string=0x0000000000217CFC "j"
 *   insn=0x0000000000217CF8 string=0x0000000000217D0C "h"
 *   insn=0x0000000000217CFC string=0x0000000000217D04 "I"
 *   insn=0x0000000000217D04 string=0x0000000000217D08 "i"
 *   insn=0x0000000000217D10 string=0x0000000000217D14 "i"
 *   insn=0x0000000000217D18 string=0x0000000000217D1C "i""
 *   insn=0x0000000000217D20 string=0x0000000000217D24 "("
 *   insn=0x0000000000217D24 string=0x0000000000217D28 "h"
 *   insn=0x0000000000217D40 string=0x0000000000217D44 ")"
 *   insn=0x0000000000217D44 string=0x0000000000217D48 "`B"
 *   insn=0x0000000000217D4C string=0x0000000000217D50 ")"
 *   insn=0x0000000000217D50 string=0x0000000000217D54 "("
 *   insn=0x0000000000217D60 string=0x0000000000217D64 "("
 *   insn=0x0000000000217D6C string=0x0000000000217D70 ")"
 *   insn=0x0000000000217D70 string=0x0000000000217D74 "`"
 *   insn=0x0000000000217D78 string=0x0000000000217D7C ")"
 *   insn=0x0000000000217D7C string=0x0000000000217D80 "("
 *   insn=0x0000000000217D98 string=0x0000000000217D9C ")"
 *   insn=0x0000000000217D9C string=0x0000000000217DA0 "`"
 *   insn=0x0000000000217DA8 string=0x0000000000217DAC ")"
 *   insn=0x0000000000217DAC string=0x0000000000217DB0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollisionShapeComponent::LoadFromProtobufMessage(
        Caver::CollisionShapeComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 Message; // x0
  __int64 v10; // x20
  int v11; // w8
  int v12; // w9
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8

  Caver::ShapeComponent::LoadFromProtobufMessage(this, a2);
  v5 = *((_QWORD *)this + 15);
  v4 = *((_QWORD *)this + 16);
  *((_DWORD *)this + 66) = *((_DWORD *)this + 28);
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 34) = v5;
  *((_QWORD *)this + 35) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::CollisionShapeComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E93C8);
  v10 = Message;
  *((_BYTE *)this + 376) = *(_BYTE *)(Message + 12);
  v11 = *(_DWORD *)(Message + 64);
  if ( (v11 & 0x20) != 0 )
    *((_DWORD *)this + 84) = *(_DWORD *)(Message + 20);
  if ( (v11 & 0x40) != 0 )
    *((_DWORD *)this + 85) = *(_DWORD *)(Message + 24);
  *((_BYTE *)this + 378) = *(_BYTE *)(Message + 13);
  *((_BYTE *)this + 379) = *(_BYTE *)(Message + 14);
  *((_BYTE *)this + 380) = *(_BYTE *)(Message + 15);
  *((_BYTE *)this + 381) = *(_BYTE *)(Message + 16);
  v12 = *(_DWORD *)(Message + 28) - 1;
  if ( (unsigned int)v12 <= 6 )
    *((_DWORD *)this + 96) = dword_583B30[v12];
  if ( (v11 & 0x100) != 0 )
    *((_DWORD *)this + 97) = *(_DWORD *)(Message + 32);
  *((_BYTE *)this + 392) = *(_BYTE *)(Message + 36);
  if ( (v11 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(Message + 40) )
      v13 = Message;
    else
      v13 = Caver::Proto::CollisionShapeComponent::default_instance_;
    Caver::Program::LoadFromProtobufMessage(
      (Caver::CollisionShapeComponent *)((char *)this + 144),
      *(const Caver::Proto::Program **)(v13 + 40));
    v11 = *(_DWORD *)(v10 + 64);
    if ( (v11 & 0x800) == 0 )
    {
LABEL_17:
      if ( (v11 & 0x1000) == 0 )
        return;
      goto LABEL_27;
    }
  }
  else if ( (v11 & 0x800) == 0 )
  {
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v10 + 48) )
    v14 = v10;
  else
    v14 = Caver::Proto::CollisionShapeComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::CollisionShapeComponent *)((char *)this + 184),
    *(const Caver::Proto::Program **)(v14 + 48));
  if ( (*(_DWORD *)(v10 + 64) & 0x1000) != 0 )
  {
LABEL_27:
    if ( *(_QWORD *)(v10 + 56) )
      v15 = v10;
    else
      v15 = Caver::Proto::CollisionShapeComponent::default_instance_;
    Caver::Program::LoadFromProtobufMessage(
      (Caver::CollisionShapeComponent *)((char *)this + 224),
      *(const Caver::Proto::Program **)(v15 + 56));
  }
}

