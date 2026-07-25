/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F400
 * Mangled: _ZNK5Caver34SnappingMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FBD60  Caver::Proto::SnappingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 24
 *   insn=0x000000000029F418 string=0x000000000029F41C "H""
 *   insn=0x000000000029F418 string=0x00000000001F57F0 "P'"
 *   insn=0x000000000029F41C string=0x000000000029F420 "YF"
 *   insn=0x000000000029F420 string=0x000000000029F424 "s""
 *   insn=0x000000000029F428 string=0x000000000029F42C "Mr"
 *   insn=0x000000000029F42C string=0x00000000001FBD60 "0'"
 *   insn=0x000000000029F430 string=0x000000000029F434 "b"
 *   insn=0x000000000029F440 string=0x000000000029F444 "K`"
 *   insn=0x000000000029F444 string=0x000000000029F448 " @"
 *   insn=0x000000000029F444 string=0x00000000001F7570 "0'"
 *   insn=0x000000000029F44C string=0x000000000029F450 "\n"
 *   insn=0x000000000029F450 string=0x000000000029F454 "\t"
 *   insn=0x000000000029F454 string=0x000000000029F458 "\n "
 *   insn=0x000000000029F45C string=0x000000000029F460 "\n"
 *   insn=0x000000000029F460 string=0x000000000029F464 "\n "
 *   insn=0x000000000029F464 string=0x000000000029F468 "\n\t"
 *   insn=0x000000000029F468 string=0x000000000029F46C "\t"
 *   insn=0x000000000029F470 string=0x000000000029F474 "\n "
 *   insn=0x000000000029F474 string=0x000000000029F478 "\n"
 *   insn=0x000000000029F478 string=0x000000000029F47C ""
 *   insn=0x000000000029F47C string=0x000000000029F480 "\t"
 *   insn=0x000000000029F484 string=0x000000000029F488 "\n "
 *   insn=0x000000000029F488 string=0x000000000029F48C "\t"
 *   insn=0x000000000029F490 string=0x000000000029F494 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage(
        Caver::SnappingMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SnappingMonsterControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w9

  v3 = (Caver::Proto::SnappingMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                             this,
                                                             a2);
  Caver::Proto::SnappingMonsterControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[8];
  result[3] = *((_DWORD *)this + 54);
  result[8] = v5 | 1;
  v6 = *((_DWORD *)this + 60);
  result[8] = v5 | 3;
  result[4] = v6;
  v7 = *((_DWORD *)this + 66);
  result[8] = v5 | 7;
  result[5] = v7;
  v8 = *((_DWORD *)this + 72);
  result[8] = v5 | 0xF;
  result[6] = v8;
  result[7] = *((_DWORD *)this + 78);
  result[8] = v5 | 0x1F;
  return result;
}

