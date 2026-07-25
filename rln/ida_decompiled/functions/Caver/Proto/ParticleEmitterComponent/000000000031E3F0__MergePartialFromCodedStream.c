/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031E3F0
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201760  .memcpy
 *   0x0000000000201A60  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202A10  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000031ECA4  Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 254
 *   insn=0x000000000031E418 string=0x000000000031E41C "i"
 *   insn=0x000000000031E41C string=0x000000000031E420 "Y"
 *   insn=0x000000000031E424 string=0x000000000031E428 "(9B"
 *   insn=0x000000000031E428 string=0x000000000031E42C ")"
 *   insn=0x000000000031E42C string=0x000000000031E430 "("
 *   insn=0x000000000031E430 string=0x000000000031E434 ")=A"
 *   insn=0x000000000031E434 string=0x000000000031E438 "{"
 *   insn=0x000000000031E444 string=0x000000000031E448 "{"
 *   insn=0x000000000031E448 string=0x000000000031E44C "<A"
 *   insn=0x000000000031E450 string=0x000000000031E454 "h"
 *   insn=0x000000000031E458 string=0x000000000031E45C """
 *   insn=0x000000000031E45C string=0x000000000031E460 "\t"
 *   insn=0x000000000031E464 string=0x000000000031E468 "!"
 *   insn=0x000000000031E468 string=0x000000000031E46C ""
 *   insn=0x000000000031E46C string=0x000000000031E470 "a""
 *   insn=0x000000000031E470 string=0x000000000031E474 "h"
 *   insn=0x000000000031E478 string=0x000000000031E494 "(|"
 *   insn=0x000000000031E480 string=0x000000000031E484 "oe"
 *   insn=0x000000000031E484 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031E488 string=0x000000000031E48C "a""
 *   insn=0x000000000031E494 string=0x000000000031E498 "\t"
 *   insn=0x000000000031E49C string=0x000000000031E4A0 "H"
 *   insn=0x000000000031E4A0 string=0x000000000031E4A4 "h{"
 *   insn=0x000000000031E4A0 string=0x000000000031E608 "("
 *   insn=0x000000000031E4A4 string=0x000000000031E4A8 ""
 *   insn=0x000000000031E4AC string=0x000000000031E4B0 "("
 *   insn=0x000000000031E4AC string=0x000000000031E4E8 "?"
 *   insn=0x000000000031E4AC string=0x000000000031E518 "?"
 *   insn=0x000000000031E4AC string=0x000000000031E548 "?"
 *   insn=0x000000000031E4AC string=0x000000000031E578 "("
 *   insn=0x000000000031E4AC string=0x000000000031E58C "?"
 *   insn=0x000000000031E4AC string=0x000000000031E5BC "("
 *   insn=0x000000000031E4AC string=0x000000000031E5CC "?"
 *   insn=0x000000000031E4AC string=0x000000000031E5FC "("
 *   insn=0x000000000031E4B4 string=0x000000000031E4B8 "`"
 *   insn=0x000000000031E4B8 string=0x000000000031E4BC "h\n"
 *   insn=0x000000000031E4BC string=0x000000000031E4C0 "i"
 *   insn=0x000000000031E4C0 string=0x000000000031E4C4 "?"
 *   insn=0x000000000031E4C8 string=0x000000000031E4CC "("
 *   insn=0x000000000031E4D4 string=0x000000000031E4D8 "("
 *   insn=0x000000000031E4DC string=0x000000000031E4E0 "h"
 *   insn=0x000000000031E4E0 string=0x000000000031E4E4 "l"
 *   insn=0x000000000031E4EC string=0x000000000031E4F0 "i"
 *   insn=0x000000000031E4F0 string=0x000000000031E4F4 "?"
 *   insn=0x000000000031E4F8 string=0x000000000031E4FC "*"
 *   insn=0x000000000031E500 string=0x000000000031E504 "J"
 *   insn=0x000000000031E504 string=0x000000000031E508 ")"
 *   insn=0x000000000031E50C string=0x000000000031E510 "i"
 *   insn=0x000000000031E510 string=0x000000000031E514 "O"
 *   insn=0x000000000031E518 string=0x000000000031E51C "a"
 *   insn=0x000000000031E51C string=0x000000000031E520 "i"
 *   insn=0x000000000031E520 string=0x000000000031E524 "?"
 *   insn=0x000000000031E528 string=0x000000000031E52C "*"
 *   insn=0x000000000031E530 string=0x000000000031E534 "J"
 *   insn=0x000000000031E534 string=0x000000000031E538 ")"
 *   insn=0x000000000031E53C string=0x000000000031E540 "i"
 *   insn=0x000000000031E54C string=0x000000000031E550 "i"
 *   insn=0x000000000031E550 string=0x000000000031E554 "?"
 *   insn=0x000000000031E558 string=0x000000000031E55C "*"
 *   insn=0x000000000031E55C string=0x000000000031E560 "j"
 *   insn=0x000000000031E560 string=0x000000000031E564 "J"
 *   insn=0x000000000031E564 string=0x000000000031E568 ")"
 *   insn=0x000000000031E56C string=0x000000000031E570 "i"
 *   insn=0x000000000031E57C string=0x000000000031E580 "A"
 *   insn=0x000000000031E584 string=0x000000000031E588 "D"
 *   insn=0x000000000031E590 string=0x000000000031E594 "i"
 *   insn=0x000000000031E594 string=0x000000000031E598 "?"
 *   insn=0x000000000031E59C string=0x000000000031E5A0 "*"
 *   insn=0x000000000031E5A4 string=0x000000000031E5A8 "J"
 *   insn=0x000000000031E5A8 string=0x000000000031E5AC ")"
 *   insn=0x000000000031E5B0 string=0x000000000031E5B4 "i"
 *   insn=0x000000000031E5C0 string=0x000000000031E5C4 "!"
 *   insn=0x000000000031E5D0 string=0x000000000031E5D4 "i"
 *   insn=0x000000000031E5D4 string=0x000000000031E5D8 "?"
 *   insn=0x000000000031E5DC string=0x000000000031E5E0 "*"
 *   insn=0x000000000031E5E0 string=0x000000000031E5E4 "J#"
 *   insn=0x000000000031E5E4 string=0x000000000031E5E8 "J"
 *   insn=0x000000000031E5E8 string=0x000000000031E5EC ")"
 *   insn=0x000000000031E5F0 string=0x000000000031E5F4 "i"
 *   insn=0x000000000031E5F4 string=0x000000000031E5F8 ""
 *   insn=0x000000000031E600 string=0x000000000031E604 "@+"
 *   insn=0x000000000031E618 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031E630 string=0x000000000031E7CC "i"
 *   insn=0x000000000031E640 string=0x000000000031E644 " 0"
 *   insn=0x000000000031E640 string=0x00000000001F9050 "0'"
 *   insn=0x000000000031E648 string=0x000000000031E64C "i"
 *   insn=0x000000000031E650 string=0x000000000031E654 "_"
 *   insn=0x000000000031E65C string=0x000000000031E660 "j"
 *   insn=0x000000000031E660 string=0x000000000031E664 "?"
 *   insn=0x000000000031E668 string=0x000000000031E66C "B"
 *   insn=0x000000000031E66C string=0x000000000031E670 "("
 *   insn=0x000000000031E67C string=0x000000000031E8FC "("
 *   insn=0x000000000031E684 string=0x000000000031E688 "rj"
 *   insn=0x000000000031E6A4 string=0x000000000031E6A8 "?"
 *   insn=0x000000000031E6A8 string=0x000000000031E6AC "("
 *   insn=0x000000000031E6AC string=0x000000000031E6B0 "\t}@"
 *   insn=0x000000000031E6B8 string=0x000000000031E6BC ")}"
 *   insn=0x000000000031E6C0 string=0x000000000031E6C4 "}~"
 *   insn=0x000000000031E6E4 string=0x000000000031E6E8 "B"
 *   insn=0x000000000031E6E4 string=0x00000000001F8570 "0'"
 *   insn=0x000000000031E6F0 string=0x000000000031E6F4 ""
 *   insn=0x000000000031E71C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000031E73C string=0x000000000031E740 "K"
 *   insn=0x000000000031E744 string=0x000000000031E748 "+"
 *   insn=0x000000000031E748 string=0x000000000031E74C "J"
 *   insn=0x000000000031E74C string=0x000000000031E750 "W"
 *   insn=0x000000000031E750 string=0x000000000031E754 "j"
 *   insn=0x000000000031E754 string=0x000000000031E758 "_"
 *   insn=0x000000000031E75C string=0x000000000031E760 "K"
 *   insn=0x000000000031E764 string=0x000000000031E768 "!"
 *   insn=0x000000000031E768 string=0x000000000031E76C "K"
 *   insn=0x000000000031E770 string=0x000000000031E774 "k"
 *   insn=0x000000000031E778 string=0x000000000031E77C "i"
 *   insn=0x000000000031E780 string=0x000000000031E784 ")"
 *   insn=0x000000000031E784 string=0x000000000031E788 "J\t"
 *   insn=0x000000000031E78C string=0x000000000031E790 "j"
 *   insn=0x000000000031E790 string=0x000000000031E794 ""
 *   insn=0x000000000031E79C string=0x000000000031E7A0 ",j"
 *   insn=0x000000000031E7A0 string=0x000000000031E7A4 " %"
 *   insn=0x000000000031E7B8 string=0x000000000031E7BC "K"
 *   insn=0x000000000031E7C0 string=0x000000000031E7C4 "\ty*"
 *   insn=0x000000000031E7C4 string=0x000000000031E7C8 "l"
 *   insn=0x000000000031E7CC string=0x000000000031E7D0 "?"
 *   insn=0x000000000031E7D4 string=0x000000000031E7D8 "*"
 *   insn=0x000000000031E7D8 string=0x000000000031E7DC "_A"
 *   insn=0x000000000031E7E0 string=0x000000000031E7E4 ")"
 *   insn=0x000000000031E7E0 string=0x000000000031E7F8 "*"
 *   insn=0x000000000031E7E4 string=0x000000000031E7E8 "i"
 *   insn=0x000000000031E7E8 string=0x000000000031E7EC "?"
 *   insn=0x000000000031E7F8 string=0x000000000031E7FC "_a"
 *   insn=0x000000000031E800 string=0x000000000031E804 ")"
 *   insn=0x000000000031E804 string=0x000000000031E808 "i"
 *   insn=0x000000000031E808 string=0x000000000031E80C "?"
 *   insn=0x000000000031E818 string=0x000000000031E81C "j"
 *   insn=0x000000000031E81C string=0x000000000031E820 "@!"
 *   insn=0x000000000031E824 string=0x000000000031E828 "i"
 *   insn=0x000000000031E830 string=0x000000000031E834 "?"
 *   insn=0x000000000031E834 string=0x000000000031E838 "j"
 *   insn=0x000000000031E840 string=0x000000000031E844 "*"
 *   insn=0x000000000031E844 string=0x000000000031E848 "_"
 *   insn=0x000000000031E848 string=0x000000000031E84C "A"
 *   insn=0x000000000031E84C string=0x000000000031E850 ")"
 *   insn=0x000000000031E850 string=0x000000000031E854 "i"
 *   insn=0x000000000031E854 string=0x000000000031E858 "?"
 *   insn=0x000000000031E870 string=0x000000000031E874 "i"
 *   insn=0x000000000031E87C string=0x000000000031E880 "?"
 *   insn=0x000000000031E880 string=0x000000000031E884 "j"
 *   insn=0x000000000031E888 string=0x000000000031E88C "B"
 *   insn=0x000000000031E88C string=0x000000000031E890 "*"
 *   insn=0x000000000031E890 string=0x000000000031E894 "_"
 *   insn=0x000000000031E898 string=0x000000000031E89C ")"
 *   insn=0x000000000031E89C string=0x000000000031E8A0 "i"
 *   insn=0x000000000031E8A0 string=0x000000000031E8A4 "?"
 *   insn=0x000000000031E8BC string=0x000000000031E8C0 "i"
 *   insn=0x000000000031E8C8 string=0x000000000031E8CC "?"
 *   insn=0x000000000031E8CC string=0x000000000031E8D0 "j"
 *   insn=0x000000000031E8D8 string=0x000000000031E8DC "*"
 *   insn=0x000000000031E8DC string=0x000000000031E8E0 "_"
 *   insn=0x000000000031E8E4 string=0x000000000031E8E8 ")"
 *   insn=0x000000000031E8E8 string=0x000000000031E8EC "i"
 *   insn=0x000000000031E8EC string=0x000000000031E8F0 "?"
 *   insn=0x000000000031E8F0 string=0x000000000031E8F4 "C"
 *   insn=0x000000000031E8F4 string=0x000000000031E8F8 "P"
 *   insn=0x000000000031E8FC string=0x000000000031E900 "h"
 *   insn=0x000000000031E924 string=0x000000000031E988 "h"
 *   insn=0x000000000031E930 string=0x000000000031E944 ""
 *   insn=0x000000000031E93C string=0x00000000001FAD20 "0'"
 *   insn=0x000000000031E94C string=0x000000000031E950 "$["
 *   insn=0x000000000031E950 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031E990 string=0x000000000031E994 "\t"
 *   insn=0x000000000031E998 string=0x000000000031E99C ")"
 *   insn=0x000000000031E99C string=0x000000000031E9A0 ""
 *   insn=0x000000000031E9A4 string=0x000000000031E9A8 "h"
 *   insn=0x000000000031E9AC string=0x000000000031E9C0 "h&G)\n"
 *   insn=0x000000000031E9B8 string=0x000000000031E9BC "`"
 *   insn=0x000000000031E9C0 string=0x000000000031E9C4 "\n"
 *   insn=0x000000000031E9C8 string=0x000000000031E9CC "j:"
 *   insn=0x000000000031E9F0 string=0x000000000031E9F4 "h"
 *   insn=0x000000000031EA04 string=0x000000000031EA08 "h:@"
 *   insn=0x000000000031EA08 string=0x000000000031EA0C ""
 *   insn=0x000000000031EA0C string=0x000000000031EA10 "K"
 *   insn=0x000000000031EA10 string=0x000000000031EA14 "h:"
 *   insn=0x000000000031EA10 string=0x000000000031EA18 "i"
 *   insn=0x000000000031EA18 string=0x000000000031EA1C "?"
 *   insn=0x000000000031EA20 string=0x000000000031EA24 "*"
 *   insn=0x000000000031EA24 string=0x000000000031EA28 "_"
 *   insn=0x000000000031EA2C string=0x000000000031EA30 "*"
 *   insn=0x000000000031EA30 string=0x000000000031EA34 "_"
 *   insn=0x000000000031EA38 string=0x000000000031EA3C ")"
 *   insn=0x000000000031EA3C string=0x000000000031EA40 "i"
 *   insn=0x000000000031EA40 string=0x000000000031EA44 "?"
 *   insn=0x000000000031EA5C string=0x000000000031EA60 "i"
 *   insn=0x000000000031EA64 string=0x000000000031EA68 "_"
 *   insn=0x000000000031EA70 string=0x000000000031EA74 "j"
 *   insn=0x000000000031EA74 string=0x000000000031EA78 "?"
 *   insn=0x000000000031EA80 string=0x000000000031EA84 "("
 *   insn=0x000000000031EA88 string=0x000000000031EA8C "A"
 *   insn=0x000000000031EA8C string=0x000000000031EA90 "("
 *   insn=0x000000000031EA90 string=0x000000000031EA94 "h"
 *   insn=0x000000000031EA98 string=0x000000000031EA9C "H"
 *   insn=0x000000000031EAA4 string=0x000000000031EABC "h"
 *   insn=0x000000000031EAB0 string=0x000000000031EAB4 "'q"
 *   insn=0x000000000031EAB4 string=0x00000000001FAF50 "0'"
 *   insn=0x000000000031EAC4 string=0x000000000031EAC8 "\t"
 *   insn=0x000000000031EACC string=0x000000000031EAD0 ")"
 *   insn=0x000000000031EAD0 string=0x000000000031EAD4 ""
 *   insn=0x000000000031EAD8 string=0x000000000031EADC "h"
 *   insn=0x000000000031EAE0 string=0x000000000031EAF4 "h&G)\n"
 *   insn=0x000000000031EAE8 string=0x000000000031EAEC "Yi"
 *   insn=0x000000000031EAF4 string=0x000000000031EAF8 "\n"
 *   insn=0x000000000031EAFC string=0x000000000031EB00 "j:"
 *   insn=0x000000000031EB00 string=0x000000000031EB04 "*\n"
 *   insn=0x000000000031EB20 string=0x000000000031EB24 " \t"
 *   insn=0x000000000031EB20 string=0x00000000001F6150 "0'"
 *   insn=0x000000000031EB24 string=0x000000000031EB28 "h"
 *   insn=0x000000000031EB38 string=0x000000000031EB3C "h:@"
 *   insn=0x000000000031EB3C string=0x000000000031EB40 ""
 *   insn=0x000000000031EB40 string=0x000000000031EB44 "K"
 *   insn=0x000000000031EB44 string=0x000000000031EB48 "h:"
 *   insn=0x000000000031EB44 string=0x000000000031EB4C "h"
 *   insn=0x000000000031EB54 string=0x000000000031EB58 "\t"
 *   insn=0x000000000031EB58 string=0x000000000031EB5C "?I"
 *   insn=0x000000000031EB60 string=0x000000000031EB64 ""
 *   insn=0x000000000031EB64 string=0x000000000031EB68 "h"
 *   insn=0x000000000031EB70 string=0x000000000031EB74 ""
 *   insn=0x000000000031EB7C string=0x000000000031EB94 "h"
 *   insn=0x000000000031EB9C string=0x000000000031EBA0 "\t"
 *   insn=0x000000000031EBA4 string=0x000000000031EBA8 ")"
 *   insn=0x000000000031EBA8 string=0x000000000031EBAC ""
 *   insn=0x000000000031EBB0 string=0x000000000031EBB4 "h"
 *   insn=0x000000000031EBB8 string=0x000000000031EBCC "h&G)\n"
 *   insn=0x000000000031EBC0 string=0x000000000031EBC4 "#i"
 *   insn=0x000000000031EBCC string=0x000000000031EBD0 "\n"
 *   insn=0x000000000031EBD4 string=0x000000000031EBD8 "j:"
 *   insn=0x000000000031EBD8 string=0x000000000031EBDC "j"
 *   insn=0x000000000031EBE4 string=0x000000000031EBE8 "f"
 *   insn=0x000000000031EBF4 string=0x000000000031EBF8 "V]"
 *   insn=0x000000000031EBF8 string=0x000000000031EBFC "`"
 *   insn=0x000000000031EBFC string=0x000000000031EC00 "h"
 *   insn=0x000000000031EC00 string=0x000000000031EC04 "("
 *   insn=0x000000000031EC10 string=0x000000000031EC14 "h:@"
 *   insn=0x000000000031EC14 string=0x000000000031EC18 ""
 *   insn=0x000000000031EC18 string=0x000000000031EC1C "K"
 *   insn=0x000000000031EC1C string=0x000000000031EC20 "h:"
 *   insn=0x000000000031EC1C string=0x000000000031EC24 "h"
 *   insn=0x000000000031EC28 string=0x000000000031EC2C "A"
 *   insn=0x000000000031EC2C string=0x000000000031EC30 "h.@"
 *   insn=0x000000000031EC30 string=0x000000000031EC34 ""
 *   insn=0x000000000031EC3C string=0x000000000031EC40 "`"
 *   insn=0x000000000031EC44 string=0x000000000031EC54 "("
 *   insn=0x000000000031EC5C string=0x000000000031EC60 "A"
 *   insn=0x000000000031EC88 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031EC98 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031EC9C string=0x000000000031ECA0 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(
        Caver::Proto::ParticleEmitterComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x26
  __int64 *v6; // x22
  char *v7; // x8
  unsigned __int64 v8; // x1
  unsigned int TagFallback; // w0
  unsigned __int8 *v10; // x9
  unsigned int v11; // w24
  unsigned __int64 v12; // x8
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  char *v19; // x9
  unsigned int v20; // w10
  _BYTE *v21; // x9
  int v22; // w10
  char *v23; // x9
  unsigned int v24; // w10
  _BYTE *v25; // x9
  unsigned __int64 v26; // x8
  char *v27; // x9
  unsigned int v28; // w10
  _BYTE *v29; // x9
  int v30; // w11
  int v31; // w21
  int v32; // w8
  char *v33; // x23
  __int64 v34; // x9
  __int64 v35; // x8
  unsigned __int64 v36; // x0
  void *v37; // x0
  __int64 v38; // x8
  int v39; // w9
  int v40; // w10
  int v41; // w23
  unsigned __int64 v42; // x9
  _BYTE *v43; // x10
  unsigned int v44; // w9
  __int64 v45; // x10
  _BYTE *v46; // x9
  int v47; // w11
  int v48; // w11
  int v49; // w11
  int v50; // w8
  int v51; // w21
  __int64 v52; // x8
  __int64 v53; // x23
  __int64 v54; // x8
  char *v55; // x8
  int v56; // w8
  int v57; // w9
  int v58; // w24
  int v59; // w8
  bool v60; // vf
  int v61; // w8
  int v62; // w11
  Caver::Proto::Vector3 *v63; // x23
  char *v64; // x8
  int v65; // w8
  int v66; // w9
  int v67; // w24
  int v68; // w8
  int v69; // w8
  _BYTE *v70; // x8
  Caver::Proto::Vector3 *v71; // x23
  char *v72; // x8
  int v73; // w8
  int v74; // w9
  int v75; // w24
  int v76; // w8
  int v77; // w8
  __int64 result; // x0
  char *v79; // [xsp+8h] [xbp-78h]
  unsigned int v80; // [xsp+14h] [xbp-6Ch] BYREF
  __int64 v81; // [xsp+18h] [xbp-68h]

  v79 = (char *)this + 48;
  v5 = (Caver::Proto::ParticleEmitterComponent *)((char *)this + 64);
  v6 = (__int64 *)((char *)this + 32);
  v81 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
LABEL_2:
    v7 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v7 < *((_QWORD *)a2 + 2) && (*v7 & 0x80000000) == 0 )
    {
      v8 = (unsigned __int8)*v7;
      *((_DWORD *)a2 + 8) = v8;
      *((_QWORD *)a2 + 1) = v7 + 1;
      if ( !(_DWORD)v8 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v8 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v8 >> 3 )
    {
      case 2u:
        if ( (v8 & 7) == 2 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(a2)
              & 1) == 0 )
            return 0;
          goto LABEL_70;
        }
        if ( (v8 & 7) != 0 )
          goto LABEL_38;
        v10 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 < *((_QWORD *)a2 + 2) )
          goto LABEL_11;
        while ( 1 )
        {
LABEL_48:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
          v11 = v80;
          while ( 1 )
          {
            v31 = *((_DWORD *)this + 10);
            if ( v31 == *((_DWORD *)this + 11) )
            {
              v32 = 2 * v31 < v31 + 1 ? v31 + 1 : 2 * v31;
              v33 = (char *)*((_QWORD *)this + 4);
              v34 = ((unsigned __int64)v32 * (unsigned __int128)4uLL) >> 64;
              *((_DWORD *)this + 11) = v32;
              v35 = 4LL * v32;
              v36 = v34 ? -1LL : v35;
              v37 = (void *)operator new[](v36);
              *((_QWORD *)this + 4) = v37;
              memcpy(v37, v33, 4LL * v31);
              if ( v33 != v79 )
              {
                if ( v33 )
                {
                  operator delete[](v33);
                  v31 = *((_DWORD *)this + 10);
                }
              }
            }
            v38 = *((_QWORD *)this + 4);
            *((_DWORD *)this + 10) = v31 + 1;
            *(_DWORD *)(v38 + 4LL * v31) = v11;
            v39 = *((_DWORD *)this + 10);
            v40 = *((_DWORD *)this + 11);
            if ( v40 - v39 >= 1 )
            {
              v41 = v40 + 1 - v39;
              do
              {
                v43 = (_BYTE *)*((_QWORD *)a2 + 1);
                v42 = *((_QWORD *)a2 + 2);
                if ( (unsigned __int64)v43 >= v42 || *v43 != 16 )
                  break;
                *((_QWORD *)a2 + 1) = v43 + 1;
                if ( (unsigned __int64)(v43 + 1) >= v42 || (char)v43[1] < 0 )
                {
                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
                    return 0;
                  v44 = v80;
                  v38 = *v6;
                }
                else
                {
                  v44 = (unsigned __int8)v43[1];
                  v80 = v44;
                  *((_QWORD *)a2 + 1) = v43 + 2;
                }
                v45 = *((int *)this + 10);
                --v41;
                *((_DWORD *)this + 10) = v45 + 1;
                *(_DWORD *)(v38 + 4 * v45) = v44;
              }
              while ( v41 > 1 );
            }
LABEL_70:
            v46 = (_BYTE *)*((_QWORD *)a2 + 1);
            v12 = *((_QWORD *)a2 + 2);
            if ( (unsigned __int64)v46 >= v12 )
              goto LABEL_2;
            if ( *v46 != 16 )
            {
              if ( *v46 != 24 )
                goto LABEL_2;
              v23 = v46 + 1;
              *((_QWORD *)a2 + 1) = v23;
              if ( (unsigned __int64)v23 < v12 )
                goto LABEL_29;
              goto LABEL_76;
            }
            v10 = v46 + 1;
            *((_QWORD *)a2 + 1) = v10;
            if ( (unsigned __int64)v10 >= v12 )
              break;
LABEL_11:
            if ( (char)*v10 < 0 )
              goto LABEL_48;
            v11 = *v10;
            v80 = v11;
            *((_QWORD *)a2 + 1) = v10 + 1;
          }
        }
      case 3u:
        if ( (v8 & 7) != 0 )
          goto LABEL_38;
        v23 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v23 >= v12 )
          goto LABEL_76;
LABEL_29:
        if ( *v23 < 0 )
        {
LABEL_76:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
          v24 = v80;
          v25 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v24 = (unsigned __int8)*v23;
          v25 = v23 + 1;
          v80 = v24;
          *((_QWORD *)a2 + 1) = v25;
        }
        v47 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 4) = v24;
        *((_DWORD *)this + 34) = v47 | 2;
        if ( (unsigned __int64)v25 >= v12 || *v25 != 32 )
          continue;
        v16 = v25 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v12 )
          goto LABEL_81;
LABEL_19:
        if ( *v16 < 0 )
        {
LABEL_81:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
          v17 = v80;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v80 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v48 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 6) = v17;
        *((_DWORD *)this + 34) = v48 | 8;
        if ( (unsigned __int64)v18 >= v12 || *v18 != 40 )
          continue;
        v19 = v18 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 >= v12 )
          goto LABEL_86;
LABEL_23:
        if ( *v19 < 0 )
        {
LABEL_86:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
          v20 = v80;
          v21 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = v19 + 1;
          v80 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v49 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 3) = v20;
        *((_DWORD *)this + 34) = v49 | 1;
        if ( (unsigned __int64)v21 >= v12 || *v21 != 48 )
          continue;
        v13 = v21 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_43;
LABEL_15:
        if ( *v13 < 0 )
        {
LABEL_43:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
          v14 = v80;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v80 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v30 = *((_DWORD *)this + 34);
        *((_BYTE *)this + 28) = v14 != 0;
        *((_DWORD *)this + 34) = v30 | 0x10;
        if ( (unsigned __int64)v15 >= v12 || *v15 != 58 )
          continue;
        do
        {
          *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_93:
          v51 = *((_DWORD *)this + 18);
          v50 = *((_DWORD *)this + 19);
          if ( v51 >= v50 )
          {
            if ( v50 == *((_DWORD *)this + 20) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v50 + 1);
              v51 = *((_DWORD *)this + 18);
              v50 = *((_DWORD *)this + 19);
            }
            *((_DWORD *)this + 19) = v50 + 1;
            v53 = operator new(0x58u);
            *(_QWORD *)(v53 + 56) = 0x400000000LL;
            *(_DWORD *)(v53 + 80) = 0;
            *(_DWORD *)(v53 + 40) = 0;
            *(_QWORD *)(v53 + 24) = 0;
            *(_QWORD *)(v53 + 32) = 0;
            *(_QWORD *)(v53 + 8) = 0;
            *(_QWORD *)(v53 + 16) = 0;
            *(_QWORD *)(v53 + 48) = v53 + 64;
            *(_QWORD *)v53 = off_6C8730;
            v54 = *((_QWORD *)this + 8);
            *((_DWORD *)this + 18) = v51 + 1;
            *(_QWORD *)(v54 + 8LL * v51) = v53;
          }
          else
          {
            v52 = *((_QWORD *)this + 8);
            *((_DWORD *)this + 18) = v51 + 1;
            v53 = *(_QWORD *)(v52 + 8LL * v51);
          }
          v55 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v55 >= *((_QWORD *)a2 + 2) || *v55 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
              return 0;
          }
          else
          {
            v80 = (unsigned __int8)*v55;
            *((_QWORD *)a2 + 1) = v55 + 1;
          }
          v56 = *((_DWORD *)a2 + 14);
          v57 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v56 + 1;
          if ( v56 >= v57 )
            return 0;
          v58 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
          if ( (Caver::Proto::ParticleEmitter::MergePartialFromCodedStream((Caver::Proto::ParticleEmitter *)v53, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v58);
          v59 = *((_DWORD *)a2 + 14);
          v60 = __OFSUB__(v59, 1);
          v61 = v59 - 1;
          if ( v61 < 0 == v60 )
            *((_DWORD *)a2 + 14) = v61;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v26 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v15 >= v26 )
            goto LABEL_2;
        }
        while ( *v15 == 58 );
        if ( *v15 != 64 )
          continue;
        v27 = v15 + 1;
        *((_QWORD *)a2 + 1) = v27;
        if ( (unsigned __int64)v27 >= v26 )
          goto LABEL_111;
LABEL_35:
        if ( *v27 < 0 )
        {
LABEL_111:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
          v28 = v80;
          v29 = (_BYTE *)*((_QWORD *)a2 + 1);
          v26 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v28 = (unsigned __int8)*v27;
          v29 = v27 + 1;
          v80 = v28;
          *((_QWORD *)a2 + 1) = v29;
        }
        v62 = *((_DWORD *)this + 34);
        *((_BYTE *)this + 20) = v28 != 0;
        v22 = v62 | 4;
        *((_DWORD *)this + 34) = v62 | 4;
        if ( (unsigned __int64)v29 >= v26 || *v29 != 74 )
          continue;
        *((_QWORD *)a2 + 1) = v29 + 1;
LABEL_116:
        v63 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 15);
        *((_DWORD *)this + 34) = v22 | 0x80;
        if ( !v63 )
        {
          v63 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v63);
          *((_QWORD *)this + 15) = v63;
        }
        v64 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v64 >= *((_QWORD *)a2 + 2) || *v64 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
        }
        else
        {
          v80 = (unsigned __int8)*v64;
          *((_QWORD *)a2 + 1) = v64 + 1;
        }
        v65 = *((_DWORD *)a2 + 14);
        v66 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v65 + 1;
        if ( v65 >= v66 )
          return 0;
        v67 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v63, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v67);
        v68 = *((_DWORD *)a2 + 14);
        v60 = __OFSUB__(v68, 1);
        v69 = v68 - 1;
        if ( v69 < 0 == v60 )
          *((_DWORD *)a2 + 14) = v69;
        v70 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v70 >= *((_QWORD *)a2 + 2) || *v70 != 82 )
          continue;
        *((_QWORD *)a2 + 1) = v70 + 1;
LABEL_130:
        v71 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 16);
        *((_DWORD *)this + 34) |= 0x100u;
        if ( !v71 )
        {
          v71 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v71);
          *((_QWORD *)this + 16) = v71;
        }
        v72 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v72 >= *((_QWORD *)a2 + 2) || *v72 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
        }
        else
        {
          v80 = (unsigned __int8)*v72;
          *((_QWORD *)a2 + 1) = v72 + 1;
        }
        v73 = *((_DWORD *)a2 + 14);
        v74 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v73 + 1;
        if ( v73 >= v74 )
          return 0;
        v75 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v71, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v75);
        v76 = *((_DWORD *)a2 + 14);
        v60 = __OFSUB__(v76, 1);
        v77 = v76 - 1;
        if ( v77 < 0 == v60 )
          *((_DWORD *)a2 + 14) = v77;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 4u:
        if ( (v8 & 7) != 0 )
          goto LABEL_38;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v12 )
          goto LABEL_19;
        goto LABEL_81;
      case 5u:
        if ( (v8 & 7) != 0 )
          goto LABEL_38;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 < v12 )
          goto LABEL_23;
        goto LABEL_86;
      case 6u:
        if ( (v8 & 7) != 0 )
          goto LABEL_38;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_15;
        goto LABEL_43;
      case 7u:
        if ( (v8 & 7) == 2 )
          goto LABEL_93;
        goto LABEL_38;
      case 8u:
        if ( (v8 & 7) != 0 )
          goto LABEL_38;
        v27 = (char *)*((_QWORD *)a2 + 1);
        v26 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v27 < v26 )
          goto LABEL_35;
        goto LABEL_111;
      case 9u:
        if ( (v8 & 7) != 2 )
          goto LABEL_38;
        v22 = *((_DWORD *)this + 34);
        goto LABEL_116;
      case 0xAu:
        if ( (v8 & 7) != 2 )
          goto LABEL_38;
        goto LABEL_130;
      default:
LABEL_38:
        if ( (v8 & 7) == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v8,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

