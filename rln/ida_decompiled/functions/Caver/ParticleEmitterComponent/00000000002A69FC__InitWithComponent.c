/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A69FC
 * Mangled: _ZN5Caver24ParticleEmitterComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *
 * Callers: 2
 *   0x00000000001FBC30  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Callees: 21
 *   0x00000000001F4170  Caver::ParticleEmitter::SaveToProtobufMessage(Caver::Proto::ParticleEmitter *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F72C0  Caver::ParticleEmitter::Clone(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FF0B0  Caver::Proto::ParticleEmitter::ParticleEmitter(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000201590  Caver::Proto::ParticleEmitterComponent::default_instance(void)
 *   0x0000000000201760  .memcpy
 *   0x0000000000201E50  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002A724C  Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 223
 *   insn=0x00000000002A6A14 string=0x00000000002A6A18 "V"
 *   insn=0x00000000002A6A30 string=0x00000000002A6A34 "`"
 *   insn=0x00000000002A6A34 string=0x00000000002A6A38 "h""
 *   insn=0x00000000002A6A38 string=0x00000000002A6A3C ""
 *   insn=0x00000000002A6A40 string=0x00000000002A6A44 "i"
 *   insn=0x00000000002A6A44 string=0x00000000002A6A48 "h"
 *   insn=0x00000000002A6A4C string=0x00000000002A6A50 "h"
 *   insn=0x00000000002A6A54 string=0x00000000002A6A58 "h*"
 *   insn=0x00000000002A6A5C string=0x00000000002A6A60 "hF"
 *   insn=0x00000000002A6A64 string=0x00000000002A6A68 "h"
 *   insn=0x00000000002A6A6C string=0x00000000002A6A70 ""
 *   insn=0x00000000002A6A70 string=0x00000000002A6A74 "("
 *   insn=0x00000000002A6A78 string=0x00000000002A6A7C "hv"
 *   insn=0x00000000002A6A80 string=0x00000000002A6A84 "h"
 *   insn=0x00000000002A6A88 string=0x00000000002A6A8C "h"
 *   insn=0x00000000002A6A94 string=0x00000000002A6A98 "hr"
 *   insn=0x00000000002A6A9C string=0x00000000002A6AA0 "u"
 *   insn=0x00000000002A6AB0 string=0x00000000002A6AB4 ""
 *   insn=0x00000000002A6AB8 string=0x00000000002A6ABC "("
 *   insn=0x00000000002A6ABC string=0x00000000002A6AC0 ""
 *   insn=0x00000000002A6ACC string=0x00000000002A6AD0 "@"
 *   insn=0x00000000002A6AD0 string=0x00000000002A6AD4 "hr"
 *   insn=0x00000000002A6AE4 string=0x00000000002A6AE8 "k"
 *   insn=0x00000000002A6AF8 string=0x00000000001F72C0 "0'"
 *   insn=0x00000000002A6B00 string=0x00000000002A6B04 "\n"
 *   insn=0x00000000002A6B00 string=0x00000000002A6B10 "t"
 *   insn=0x00000000002A6B04 string=0x00000000002A6B08 "J"
 *   insn=0x00000000002A6B08 string=0x00000000002A6B0C "\n"
 *   insn=0x00000000002A6B10 string=0x00000000002A6B14 "i"
 *   insn=0x00000000002A6B14 string=0x00000000002A6B18 "4"
 *   insn=0x00000000002A6B1C string=0x00000000002A6B20 ""
 *   insn=0x00000000002A6B2C string=0x00000000002A6B30 "\t@"
 *   insn=0x00000000002A6B3C string=0x00000000002A6B40 ""
 *   insn=0x00000000002A6B4C string=0x00000000002A6B50 "@"
 *   insn=0x00000000002A6B5C string=0x00000000002A6B60 "3"
 *   insn=0x00000000002A6B60 string=0x00000000002A6B64 "h"
 *   insn=0x00000000002A6B64 string=0x00000000002A6B68 ""
 *   insn=0x00000000002A6B68 string=0x00000000002A6B6C "h"
 *   insn=0x00000000002A6B70 string=0x00000000002A6B74 "h"
 *   insn=0x00000000002A6B78 string=0x00000000002A6B7C "\t@"
 *   insn=0x00000000002A6B80 string=0x00000000002A6B84 "h\n@"
 *   insn=0x00000000002A6B84 string=0x00000000002A6B88 ""
 *   insn=0x00000000002A6B88 string=0x00000000002A6B8C "h\n"
 *   insn=0x00000000002A6B90 string=0x00000000002A6B94 "h"
 *   insn=0x00000000002A6B98 string=0x00000000002A6B9C "@"
 *   insn=0x00000000002A6BD0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A6BD8 string=0x00000000002A6BDC "4"
 *   insn=0x00000000002A6BE0 string=0x00000000002A6BE4 ""
 *   insn=0x00000000002A6BF0 string=0x00000000002A6BF4 "\t@"
 *   insn=0x00000000002A6C00 string=0x00000000002A6C04 ""
 *   insn=0x00000000002A6C10 string=0x00000000002A6C14 "@"
 *   insn=0x00000000002A6C20 string=0x00000000002A6C24 "(k"
 *   insn=0x00000000002A6C40 string=0x00000000002A6C44 "U"
 *   insn=0x00000000002A6C58 string=0x00000000002A6C5C """
 *   insn=0x00000000002A6C58 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002A6C5C string=0x00000000002A6C60 "UE"
 *   insn=0x00000000002A6C6C string=0x00000000002A6C70 "H`"
 *   insn=0x00000000002A6C78 string=0x00000000002A6C7C "i"
 *   insn=0x00000000002A6C7C string=0x00000000002A6C80 "?"
 *   insn=0x00000000002A6C84 string=0x00000000002A6C88 "`"
 *   insn=0x00000000002A6C88 string=0x00000000002A6C8C "h"
 *   insn=0x00000000002A6C94 string=0x00000000002A6C98 "@"
 *   insn=0x00000000002A6C98 string=0x00000000002A6C9C ""
 *   insn=0x00000000002A6C9C string=0x00000000002A6CA0 ""
 *   insn=0x00000000002A6CA4 string=0x00000000002A6CA8 ""
 *   insn=0x00000000002A6CA8 string=0x00000000002A6CAC ""
 *   insn=0x00000000002A6CB4 string=0x00000000002A6CB8 "i*A"
 *   insn=0x00000000002A6CB8 string=0x00000000002A6CBC "?"
 *   insn=0x00000000002A6CC0 string=0x00000000002A6CC4 "`"
 *   insn=0x00000000002A6CC4 string=0x00000000002A6CC8 "h*"
 *   insn=0x00000000002A6CD0 string=0x00000000002A6CD4 "@"
 *   insn=0x00000000002A6CD4 string=0x00000000002A6CD8 ""
 *   insn=0x00000000002A6CD8 string=0x00000000002A6CDC ""
 *   insn=0x00000000002A6CE0 string=0x00000000002A6CE4 ""
 *   insn=0x00000000002A6CE4 string=0x00000000002A6CE8 ""
 *   insn=0x00000000002A6CF0 string=0x00000000002A6CF4 "h"
 *   insn=0x00000000002A6D00 string=0x00000000002A6D04 "hF"
 *   insn=0x00000000002A6D0C string=0x00000000002A6D10 "i"
 *   insn=0x00000000002A6D1C string=0x00000000002A6D20 "J"
 *   insn=0x00000000002A6D20 string=0x00000000002A6D24 "k"
 *   insn=0x00000000002A6D24 string=0x00000000002A6D28 "?"
 *   insn=0x00000000002A6D28 string=0x00000000002A6D2C "J"
 *   insn=0x00000000002A6D2C string=0x00000000002A6D30 "I"
 *   insn=0x00000000002A6D30 string=0x00000000002A6D34 ")=@"
 *   insn=0x00000000002A6D34 string=0x00000000002A6D38 "*"
 *   insn=0x00000000002A6D38 string=0x00000000002A6D3C ")"
 *   insn=0x00000000002A6D3C string=0x00000000002A6D40 "j"
 *   insn=0x00000000002A6D40 string=0x00000000002A6D44 "iv"
 *   insn=0x00000000002A6D50 string=0x00000000002A6D54 ")"
 *   insn=0x00000000002A6D58 string=0x00000000002A6D5C ")"
 *   insn=0x00000000002A6D5C string=0x00000000002A6D60 "("
 *   insn=0x00000000002A6D60 string=0x00000000002A6D64 "A@"
 *   insn=0x00000000002A6D64 string=0x00000000002A6D68 "\t"
 *   insn=0x00000000002A6D68 string=0x00000000002A6D6C ""
 *   insn=0x00000000002A6D6C string=0x00000000002A6D70 "i"
 *   insn=0x00000000002A6D70 string=0x00000000002A6D74 "h"
 *   insn=0x00000000002A6D7C string=0x00000000002A6D80 "hr"
 *   insn=0x00000000002A6D84 string=0x00000000002A6D88 "`"
 *   insn=0x00000000002A6D98 string=0x00000000002A6D9C "\t@"
 *   insn=0x00000000002A6D9C string=0x00000000002A6DA0 "!yv"
 *   insn=0x00000000002A6DA4 string=0x00000000002A6DA8 "hr"
 *   insn=0x00000000002A6DDC string=0x00000000002A6DE0 "\n"
 *   insn=0x00000000002A6DDC string=0x00000000002A6DEC "t"
 *   insn=0x00000000002A6DE0 string=0x00000000002A6DE4 "J"
 *   insn=0x00000000002A6DE4 string=0x00000000002A6DE8 "\n"
 *   insn=0x00000000002A6DEC string=0x00000000002A6DF0 "i"
 *   insn=0x00000000002A6DF0 string=0x00000000002A6DF4 "4"
 *   insn=0x00000000002A6DF8 string=0x00000000002A6DFC ""
 *   insn=0x00000000002A6E08 string=0x00000000002A6E0C "\t@"
 *   insn=0x00000000002A6E18 string=0x00000000002A6E1C ""
 *   insn=0x00000000002A6E28 string=0x00000000002A6E2C "@"
 *   insn=0x00000000002A6E38 string=0x00000000002A6E3C "3"
 *   insn=0x00000000002A6E3C string=0x00000000002A6E40 "h"
 *   insn=0x00000000002A6E40 string=0x00000000002A6E44 ""
 *   insn=0x00000000002A6E44 string=0x00000000002A6E48 "h"
 *   insn=0x00000000002A6E4C string=0x00000000002A6E50 "h"
 *   insn=0x00000000002A6E54 string=0x00000000002A6E58 "\t@"
 *   insn=0x00000000002A6E5C string=0x00000000002A6E60 "h\n@"
 *   insn=0x00000000002A6E60 string=0x00000000002A6E64 ""
 *   insn=0x00000000002A6E64 string=0x00000000002A6E68 "h\n"
 *   insn=0x00000000002A6E6C string=0x00000000002A6E70 "h"
 *   insn=0x00000000002A6E74 string=0x00000000002A6E78 "@"
 *   insn=0x00000000002A6E8C string=0x00000000002A6EA8 "\n="
 *   insn=0x00000000002A6EB0 string=0x00000000002A6EB4 "4"
 *   insn=0x00000000002A6EB8 string=0x00000000002A6EBC ""
 *   insn=0x00000000002A6EC8 string=0x00000000002A6ECC "\t@"
 *   insn=0x00000000002A6ED8 string=0x00000000002A6EDC ""
 *   insn=0x00000000002A6EE8 string=0x00000000002A6EEC "@"
 *   insn=0x00000000002A6EF8 string=0x00000000002A6EFC "rj"
 *   insn=0x00000000002A6F2C string=0x00000000002A6F30 """
 *   insn=0x00000000002A6F30 string=0x00000000002A6F34 "UE"
 *   insn=0x00000000002A6F34 string=0x00000000002A6F38 "s""
 *   insn=0x00000000002A6F44 string=0x00000000002A6F48 "b"
 *   insn=0x00000000002A6F58 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002A6F5C string=0x00000000002A6F60 "h"
 *   insn=0x00000000002A6F64 string=0x00000000002A6F68 "\n"
 *   insn=0x00000000002A6F68 string=0x00000000002A6F6C "i"
 *   insn=0x00000000002A6F6C string=0x00000000002A6F70 "j"
 *   insn=0x00000000002A6F74 string=0x00000000002A6F78 "\n\t"
 *   insn=0x00000000002A6F78 string=0x00000000002A6F7C "i"
 *   insn=0x00000000002A6F80 string=0x00000000002A6F84 "j"
 *   insn=0x00000000002A6F84 string=0x00000000002A6F88 "\n"
 *   insn=0x00000000002A6F88 string=0x00000000002A6F8C "iR"
 *   insn=0x00000000002A6F90 string=0x00000000002A6F94 "i"
 *   insn=0x00000000002A6F98 string=0x00000000002A6F9C "j"
 *   insn=0x00000000002A6FA0 string=0x00000000002A6FA4 "H"
 *   insn=0x00000000002A6FA4 string=0x00000000002A6FA8 "ir"
 *   insn=0x00000000002A6FB8 string=0x00000000002A6FBC "$!"
 *   insn=0x00000000002A6FBC string=0x00000000002A6FC0 "c($"
 *   insn=0x00000000002A6FC0 string=0x00000000002A6FC4 "D""
 *   insn=0x00000000002A6FC4 string=0x00000000002A6FC8 "c($"
 *   insn=0x00000000002A6FC8 string=0x00000000002A6FCC "` ("
 *   insn=0x00000000002A6FD0 string=0x00000000002A6FD4 "u>@"
 *   insn=0x00000000002A6FD8 string=0x00000000002A6FDC ""
 *   insn=0x00000000002A6FDC string=0x00000000002A6FE0 "h"
 *   insn=0x00000000002A6FE4 string=0x00000000002A6FE8 "H"
 *   insn=0x00000000002A6FE8 string=0x00000000002A6FEC ")"
 *   insn=0x00000000002A6FEC string=0x00000000002A6FF0 "\n"
 *   insn=0x00000000002A6FF0 string=0x00000000002A6FF4 "\t"
 *   insn=0x00000000002A6FF8 string=0x00000000002A6FFC "y9"
 *   insn=0x00000000002A6FFC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A7004 string=0x00000000002A7008 "u>"
 *   insn=0x00000000002A7004 string=0x00000000001FAF50 "0'"
 *   insn=0x00000000002A701C string=0x00000000002A7020 "i\t"
 *   insn=0x00000000002A7034 string=0x00000000002A7038 "$!"
 *   insn=0x00000000002A7038 string=0x00000000002A703C "c($"
 *   insn=0x00000000002A703C string=0x00000000002A7040 "D""
 *   insn=0x00000000002A7040 string=0x00000000002A7044 "c($"
 *   insn=0x00000000002A7044 string=0x00000000002A7048 "` ("
 *   insn=0x00000000002A704C string=0x00000000002A7050 "h"
 *   insn=0x00000000002A7050 string=0x00000000002A7054 "uB@"
 *   insn=0x00000000002A7054 string=0x00000000002A7058 ""
 *   insn=0x00000000002A7058 string=0x00000000002A705C "h"
 *   insn=0x00000000002A7060 string=0x00000000002A7064 "H"
 *   insn=0x00000000002A7064 string=0x00000000002A7068 ")"
 *   insn=0x00000000002A7068 string=0x00000000002A706C "\n"
 *   insn=0x00000000002A706C string=0x00000000002A7070 "\t"
 *   insn=0x00000000002A7074 string=0x00000000002A7078 "Z9"
 *   insn=0x00000000002A7080 string=0x00000000002A7084 "uB"
 *   insn=0x00000000002A7098 string=0x00000000002A709C "i\t"
 *   insn=0x00000000002A70A8 string=0x00000000002A70AC "K"
 *   insn=0x00000000002A70B0 string=0x00000000002A70B4 "y"
 *   insn=0x00000000002A70C4 string=0x00000000002A70C8 ""
 *   insn=0x00000000002A70D8 string=0x00000000002A70DC ""
 *   insn=0x00000000002A70E0 string=0x00000000002A70E4 "{"E)"
 *   insn=0x00000000002A70F0 string=0x00000000002A70F4 "h"
 *   insn=0x00000000002A70F0 string=0x00000000002A7150 "h"
 *   insn=0x00000000002A70F4 string=0x00000000002A70F8 "i{"
 *   insn=0x00000000002A70F8 string=0x00000000002A70FC "?"
 *   insn=0x00000000002A70FC string=0x00000000002A7100 "("
 *   insn=0x00000000002A7100 string=0x00000000002A7104 "\t}@"
 *   insn=0x00000000002A7104 string=0x00000000002A7108 "w"
 *   insn=0x00000000002A7108 string=0x00000000002A710C ")}"
 *   insn=0x00000000002A710C string=0x00000000002A7110 "h."
 *   insn=0x00000000002A7110 string=0x00000000002A7114 "}~"
 *   insn=0x00000000002A711C string=0x00000000002A7120 "|"
 *   insn=0x00000000002A7124 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002A712C string=0x00000000002A7130 "`"
 *   insn=0x00000000002A7148 string=0x00000000002A714C "{*@"
 *   insn=0x00000000002A7148 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002A7150 string=0x00000000002A7154 "i"
 *   insn=0x00000000002A7154 string=0x00000000002A7158 "i*"
 *   insn=0x00000000002A7174 string=0x00000000002A7178 "T"
 *   insn=0x00000000002A7178 string=0x00000000002A717C "i"I))}@"
 *   insn=0x00000000002A717C string=0x00000000002A7180 ")}@"
 *   insn=0x00000000002A7180 string=0x00000000002A7184 "?"
 *   insn=0x00000000002A7188 string=0x00000000002A718C "h"@"
 *   insn=0x00000000002A7188 string=0x00000000002A71C0 "iR@"
 *   insn=0x00000000002A718C string=0x00000000002A7190 "*"
 *   insn=0x00000000002A7190 string=0x00000000002A7194 "jJ"
 *   insn=0x00000000002A7198 string=0x00000000002A719C ""
 *   insn=0x00000000002A71C8 string=0x00000000002A71CC "`"
 *   insn=0x00000000002A71C8 string=0x00000000002A71DC ""
 *   insn=0x00000000002A71D4 string=0x00000000002A71D8 "hN@"
 *   insn=0x00000000002A71D4 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002A71E0 string=0x00000000002A71E4 "hN"
 *   insn=0x00000000002A71F0 string=0x00000000002A71F4 "hJ"
 *   insn=0x00000000002A71F4 string=0x00000000002A71F8 "i"@"
 *   insn=0x00000000002A71F8 string=0x00000000002A71FC "\n"
 *   insn=0x00000000002A71FC string=0x00000000002A7200 "jJ"
 *   insn=0x00000000002A7200 string=0x00000000002A7204 "5y("
 *   insn=0x00000000002A722C string=0x00000000001F4170 "P'"
 *   insn=0x00000000002A7240 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ParticleEmitter *__fastcall Caver::ParticleEmitterComponent::InitWithComponent(
        Caver::ParticleEmitterComponent *this,
        const Caver::ParticleEmitterComponent *a2)
{
  int v4; // w8
  char *v5; // x21
  __int64 v6; // x23
  char *v7; // x24
  __int64 *v8; // x25
  __int64 v9; // t1
  void (__fastcall *v10)(char *, _QWORD); // x26
  __int64 v11; // t1
  unsigned int v12; // w0
  Caver::ParticleEmitter *result; // x0
  _QWORD *v14; // x8
  __int64 v15; // x9
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x19
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // [xsp+D8h] [xbp-58h] BYREF
  _QWORD *v23; // [xsp+E0h] [xbp-50h]
  __int64 v24; // [xsp+E8h] [xbp-48h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  *((_BYTE *)this + 320) = *((_BYTE *)a2 + 320);
  *((_DWORD *)this + 74) = *((_DWORD *)a2 + 74);
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 81);
  *((_BYTE *)this + 361) = *((_BYTE *)a2 + 361);
  *(_QWORD *)((char *)this + 364) = *(_QWORD *)((char *)a2 + 364);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  *((_QWORD *)this + 49) = *((_QWORD *)a2 + 49);
  *((_DWORD *)this + 100) = *((_DWORD *)a2 + 100);
  v4 = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 28) = v4;
  if ( v4 >= 1 )
  {
    v5 = (char *)this + 120;
    v6 = 0;
    v7 = (char *)this + 120;
    v8 = (__int64 *)((char *)a2 + 120);
    do
    {
      v9 = *(_QWORD *)v7;
      v7 += 24;
      v10 = *(void (__fastcall **)(char *, _QWORD))(v9 + 16);
      v11 = *v8;
      v8 += 3;
      v12 = (*(__int64 (**)(void))(v11 + 8))();
      v10(v5, v12);
      ++v6;
      v5 = v7;
    }
    while ( v6 < *((int *)this + 28) );
  }
  result = (Caver::ParticleEmitter *)*((_QWORD *)a2 + 43);
  if ( result )
  {
    result = (Caver::ParticleEmitter *)Caver::ParticleEmitter::Clone(&v22, result);
    v15 = v22;
    v14 = v23;
    if ( v23 )
      ++v23[1];
    v16 = (_QWORD *)*((_QWORD *)this + 44);
    *((_QWORD *)this + 43) = v15;
    *((_QWORD *)this + 44) = v14;
    if ( v16 )
    {
      v17 = v16[1] - 1LL;
      v16[1] = v17;
      if ( !v17 )
      {
        result = (Caver::ParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
        v18 = v16[2] - 1LL;
        v16[2] = v18;
        if ( !v18 )
          result = (Caver::ParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
      }
    }
    v19 = v23;
    if ( v23 )
    {
      v20 = v23[1] - 1LL;
      v23[1] = v20;
      if ( !v20 )
      {
        result = (Caver::ParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          return (Caver::ParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
  }
  return result;
}

