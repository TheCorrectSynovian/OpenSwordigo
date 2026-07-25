/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339D60
 * Mangled: _ZN5Caver5Proto4Mesh27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F9330  Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6400  Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAB50  Caver::Proto::Box::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FDA50  Caver::Proto::Box::Box(void)
 *   0x00000000001FF2E0  Caver::Proto::MeshData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000033AA0C  Caver::Proto::Mesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 380
 *   insn=0x0000000000339D88 string=0x0000000000339D8C "Z"
 *   insn=0x0000000000339D98 string=0x0000000000339D9C "v"
 *   insn=0x0000000000339D9C string=0x0000000000339DA0 "i"
 *   insn=0x0000000000339DA4 string=0x0000000000339DA8 ")\tE"
 *   insn=0x0000000000339DA8 string=0x0000000000339DAC "k"
 *   insn=0x0000000000339DB0 string=0x0000000000339DB4 "k"
 *   insn=0x0000000000339DB4 string=0x0000000000339DB8 "J"
 *   insn=0x0000000000339DB8 string=0x0000000000339DBC "1E"
 *   insn=0x0000000000339DC4 string=0x0000000000339DC8 "(A"
 *   insn=0x0000000000339DC8 string=0x0000000000339DCC "{""
 *   insn=0x0000000000339DCC string=0x0000000000339DD0 "|B"
 *   insn=0x0000000000339DE0 string=0x0000000000339DE4 "ha"
 *   insn=0x0000000000339DF0 string=0x0000000000339DF4 "h"
 *   insn=0x0000000000339DFC string=0x0000000000339E00 """
 *   insn=0x0000000000339E00 string=0x0000000000339E04 "\t"
 *   insn=0x0000000000339E08 string=0x0000000000339E0C "!"
 *   insn=0x0000000000339E0C string=0x0000000000339E10 ""
 *   insn=0x0000000000339E10 string=0x0000000000339E14 "a""
 *   insn=0x0000000000339E14 string=0x0000000000339E18 "h"
 *   insn=0x0000000000339E1C string=0x0000000000339E38 "(|"
 *   insn=0x0000000000339E28 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000339E2C string=0x0000000000339E30 "a""
 *   insn=0x0000000000339E30 string=0x0000000000339E34 "A\"
 *   insn=0x0000000000339E38 string=0x0000000000339E3C ""
 *   insn=0x0000000000339E40 string=0x0000000000339E44 "H"
 *   insn=0x0000000000339E44 string=0x0000000000339EEC "("
 *   insn=0x0000000000339E48 string=0x0000000000339E4C ""
 *   insn=0x0000000000339E50 string=0x0000000000339E54 "("
 *   insn=0x0000000000339E50 string=0x0000000000339E8C "("
 *   insn=0x0000000000339E50 string=0x0000000000339E9C "("
 *   insn=0x0000000000339E50 string=0x0000000000339EAC "("
 *   insn=0x0000000000339E50 string=0x0000000000339EBC "("
 *   insn=0x0000000000339E50 string=0x0000000000339ECC "("
 *   insn=0x0000000000339E50 string=0x0000000000339EDC "("
 *   insn=0x0000000000339E50 string=0x0000000000339EFC "("
 *   insn=0x0000000000339E50 string=0x0000000000339F10 "("
 *   insn=0x0000000000339E50 string=0x0000000000339F44 "("
 *   insn=0x0000000000339E50 string=0x0000000000339F54 "("
 *   insn=0x0000000000339E50 string=0x0000000000339F64 "("
 *   insn=0x0000000000339E50 string=0x0000000000339F74 "("
 *   insn=0x0000000000339E54 string=0x0000000000339E58 "A\t"
 *   insn=0x0000000000339E58 string=0x0000000000339E5C "i"
 *   insn=0x0000000000339E60 string=0x0000000000339E64 "?"
 *   insn=0x0000000000339E68 string=0x0000000000339E6C "*"
 *   insn=0x0000000000339E6C string=0x0000000000339E70 "J\t"
 *   insn=0x0000000000339E74 string=0x0000000000339E78 "J"
 *   insn=0x0000000000339E78 string=0x0000000000339E7C ")"
 *   insn=0x0000000000339E7C string=0x0000000000339E80 "j"
 *   insn=0x0000000000339E80 string=0x0000000000339E84 "i"
 *   insn=0x0000000000339E84 string=0x0000000000339E88 "J"
 *   insn=0x0000000000339E90 string=0x0000000000339E94 "a"
 *   insn=0x0000000000339E94 string=0x0000000000339E98 "P"
 *   insn=0x0000000000339EB0 string=0x0000000000339EB4 "a"
 *   insn=0x0000000000339EB8 string=0x000000000033A940 "i"
 *   insn=0x0000000000339ED0 string=0x0000000000339ED4 "a"
 *   insn=0x0000000000339ED4 string=0x0000000000339ED8 "|"
 *   insn=0x0000000000339ED8 string=0x000000000033A8C8 "I"
 *   insn=0x0000000000339F08 string=0x0000000000339F0C "E"
 *   insn=0x0000000000339F10 string=0x0000000000339F14 "a"
 *   insn=0x0000000000339F14 string=0x0000000000339F18 "i"
 *   insn=0x0000000000339F1C string=0x0000000000339F20 "?"
 *   insn=0x0000000000339F24 string=0x0000000000339F28 "*"
 *   insn=0x0000000000339F2C string=0x0000000000339F30 "J"
 *   insn=0x0000000000339F30 string=0x0000000000339F34 ")"
 *   insn=0x0000000000339F38 string=0x0000000000339F3C "i"
 *   insn=0x0000000000339F3C string=0x0000000000339F40 "."
 *   insn=0x0000000000339F4C string=0x0000000000339F50 "2"
 *   insn=0x0000000000339F58 string=0x0000000000339F5C "!"
 *   insn=0x0000000000339F5C string=0x0000000000339F60 "i"
 *   insn=0x0000000000339F88 string=0x0000000000339F8C "Q"
 *   insn=0x0000000000339F8C string=0x0000000000339F90 " "
 *   insn=0x0000000000339F8C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000339F9C string=0x0000000000339FA0 ","
 *   insn=0x0000000000339FA0 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000339FA4 string=0x0000000000339FA8 "i"
 *   insn=0x0000000000339FB0 string=0x0000000000339FB4 "?"
 *   insn=0x0000000000339FB4 string=0x0000000000339FB8 "J"
 *   insn=0x0000000000339FC0 string=0x0000000000339FC4 "*"
 *   insn=0x0000000000339FC4 string=0x0000000000339FC8 "_A"
 *   insn=0x0000000000339FC8 string=0x0000000000339FCC "A"
 *   insn=0x0000000000339FCC string=0x0000000000339FD0 ")"
 *   insn=0x0000000000339FD0 string=0x0000000000339FD4 "i"
 *   insn=0x0000000000339FD4 string=0x0000000000339FD8 "?"
 *   insn=0x0000000000339FD8 string=0x0000000000339FDC "c"
 *   insn=0x0000000000339FE8 string=0x0000000000339FEC "@N"
 *   insn=0x0000000000339FEC string=0x0000000000339FF0 "i"
 *   insn=0x0000000000339FF8 string=0x0000000000339FFC "?"
 *   insn=0x0000000000339FFC string=0x000000000033A000 "J"
 *   insn=0x000000000033A004 string=0x000000000033A008 "b"
 *   insn=0x000000000033A008 string=0x000000000033A00C "("
 *   insn=0x000000000033A014 string=0x000000000033A018 "("
 *   insn=0x000000000033A018 string=0x000000000033A01C "h"
 *   insn=0x000000000033A020 string=0x000000000033A024 "H"
 *   insn=0x000000000033A028 string=0x000000000033A02C "8"
 *   insn=0x000000000033A02C string=0x000000000033A050 "h"
 *   insn=0x000000000033A030 string=0x000000000033A034 "k"
 *   insn=0x000000000033A034 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033A03C string=0x000000000033A040 ""
 *   insn=0x000000000033A044 string=0x000000000033A048 ""
 *   insn=0x000000000033A05C string=0x000000000033A060 "\t"
 *   insn=0x000000000033A064 string=0x000000000033A068 ")"
 *   insn=0x000000000033A068 string=0x000000000033A06C ""
 *   insn=0x000000000033A070 string=0x000000000033A074 "h"
 *   insn=0x000000000033A078 string=0x000000000033A08C "h&G)\n"
 *   insn=0x000000000033A084 string=0x000000000033A088 "`I"
 *   insn=0x000000000033A08C string=0x000000000033A090 "\n"
 *   insn=0x000000000033A094 string=0x000000000033A098 "j:"
 *   insn=0x000000000033A0A4 string=0x000000000033A0A8 "6""
 *   insn=0x000000000033A0BC string=0x000000000033A0C0 "h"
 *   insn=0x000000000033A0CC string=0x000000000033A0D0 "P#"
 *   insn=0x000000000033A0D0 string=0x000000000033A0D4 "h:@"
 *   insn=0x000000000033A0D4 string=0x000000000033A0D8 ""
 *   insn=0x000000000033A0D8 string=0x000000000033A0DC "K"
 *   insn=0x000000000033A0DC string=0x000000000033A0E0 "h:"
 *   insn=0x000000000033A0DC string=0x000000000033A0E4 "h"
 *   insn=0x000000000033A0EC string=0x000000000033A0F0 """
 *   insn=0x000000000033A0F0 string=0x000000000033A0F4 "\t"
 *   insn=0x000000000033A0F4 string=0x000000000033A0F8 "?"
 *   insn=0x000000000033A0FC string=0x000000000033A100 ""
 *   insn=0x000000000033A100 string=0x000000000033A104 "h"
 *   insn=0x000000000033A10C string=0x000000000033A110 ""
 *   insn=0x000000000033A114 string=0x000000000033A118 "8"
 *   insn=0x000000000033A118 string=0x000000000033A13C "h"
 *   insn=0x000000000033A11C string=0x000000000033A120 "0"
 *   insn=0x000000000033A128 string=0x000000000033A12C ""
 *   insn=0x000000000033A130 string=0x000000000033A134 ""
 *   insn=0x000000000033A148 string=0x000000000033A14C "\t"
 *   insn=0x000000000033A150 string=0x000000000033A154 ")"
 *   insn=0x000000000033A154 string=0x000000000033A158 ""
 *   insn=0x000000000033A15C string=0x000000000033A160 "h"
 *   insn=0x000000000033A164 string=0x000000000033A178 "h&G)\n"
 *   insn=0x000000000033A178 string=0x000000000033A17C "\n"
 *   insn=0x000000000033A180 string=0x000000000033A184 "j:"
 *   insn=0x000000000033A184 string=0x000000000033A188 "jA"
 *   insn=0x000000000033A1A0 string=0x000000000033A1A4 "O"
 *   insn=0x000000000033A1A4 string=0x000000000033A1A8 "`@"
 *   insn=0x000000000033A1A8 string=0x000000000033A1AC "h"
 *   insn=0x000000000033A1AC string=0x000000000033A1B0 "(@"
 *   insn=0x000000000033A1BC string=0x000000000033A1C0 "h:@"
 *   insn=0x000000000033A1C0 string=0x000000000033A1C4 ""
 *   insn=0x000000000033A1C4 string=0x000000000033A1C8 "K"
 *   insn=0x000000000033A1C8 string=0x000000000033A1CC "h:"
 *   insn=0x000000000033A1C8 string=0x000000000033A1D0 "h"
 *   insn=0x000000000033A1DC string=0x000000000033A1E0 "\t"
 *   insn=0x000000000033A1E0 string=0x000000000033A1E4 "?"
 *   insn=0x000000000033A1E4 string=0x000000000033A1E8 "a"
 *   insn=0x000000000033A1E8 string=0x000000000033A1EC ""
 *   insn=0x000000000033A1EC string=0x000000000033A1F0 "h"
 *   insn=0x000000000033A1F8 string=0x000000000033A1FC ""
 *   insn=0x000000000033A200 string=0x000000000033A204 "8"
 *   insn=0x000000000033A204 string=0x000000000033A228 "h"
 *   insn=0x000000000033A214 string=0x000000000033A218 ""
 *   insn=0x000000000033A21C string=0x000000000033A220 ""
 *   insn=0x000000000033A234 string=0x000000000033A238 "\t"
 *   insn=0x000000000033A23C string=0x000000000033A240 ")"
 *   insn=0x000000000033A240 string=0x000000000033A244 ""
 *   insn=0x000000000033A248 string=0x000000000033A24C "h"
 *   insn=0x000000000033A250 string=0x000000000033A264 "h&G)\n"
 *   insn=0x000000000033A258 string=0x000000000033A25C "}"
 *   insn=0x000000000033A264 string=0x000000000033A268 "\n"
 *   insn=0x000000000033A26C string=0x000000000033A270 "j:"
 *   insn=0x000000000033A270 string=0x000000000033A274 "\n:"
 *   insn=0x000000000033A294 string=0x000000000033A298 "h"
 *   insn=0x000000000033A2A8 string=0x000000000033A2AC "h:@"
 *   insn=0x000000000033A2AC string=0x000000000033A2B0 ""
 *   insn=0x000000000033A2B0 string=0x000000000033A2B4 "K"
 *   insn=0x000000000033A2B4 string=0x000000000033A2B8 "h:"
 *   insn=0x000000000033A2B4 string=0x000000000033A2BC "h"
 *   insn=0x000000000033A2C4 string=0x000000000033A2C8 "b"
 *   insn=0x000000000033A2C8 string=0x000000000033A2CC "\t"
 *   insn=0x000000000033A2CC string=0x000000000033A2D0 "?"
 *   insn=0x000000000033A2D4 string=0x000000000033A2D8 ""
 *   insn=0x000000000033A2D8 string=0x000000000033A2DC "h"
 *   insn=0x000000000033A2E0 string=0x000000000033A2E4 "?"
 *   insn=0x000000000033A2EC string=0x000000000033A2F0 "*"
 *   insn=0x000000000033A2F0 string=0x000000000033A2F4 ")"
 *   insn=0x000000000033A300 string=0x000000000033A354 "h"
 *   insn=0x000000000033A30C string=0x000000000033A320 ""
 *   insn=0x000000000033A318 string=0x00000000001FAD20 "0'"
 *   insn=0x000000000033A334 string=0x000000000033A338 ""
 *   insn=0x000000000033A338 string=0x000000000033A33C ""
 *   insn=0x000000000033A344 string=0x000000000033A348 ")"
 *   insn=0x000000000033A360 string=0x000000000033A364 "\t"
 *   insn=0x000000000033A368 string=0x000000000033A36C ")"
 *   insn=0x000000000033A36C string=0x000000000033A370 ""
 *   insn=0x000000000033A374 string=0x000000000033A378 "h"
 *   insn=0x000000000033A37C string=0x000000000033A390 "h&G)\n"
 *   insn=0x000000000033A384 string=0x000000000033A388 "2"
 *   insn=0x000000000033A388 string=0x000000000033A38C "@1"
 *   insn=0x000000000033A390 string=0x000000000033A394 "\n"
 *   insn=0x000000000033A398 string=0x000000000033A39C "j:"
 *   insn=0x000000000033A3A8 string=0x000000000033A3AC "u!"
 *   insn=0x000000000033A3C0 string=0x000000000033A3C4 "h"
 *   insn=0x000000000033A3C4 string=0x000000000033A3C8 "h/"
 *   insn=0x000000000033A3D4 string=0x000000000033A3D8 "h:@"
 *   insn=0x000000000033A3D8 string=0x000000000033A3DC ""
 *   insn=0x000000000033A3DC string=0x000000000033A3E0 "K"
 *   insn=0x000000000033A3E0 string=0x000000000033A3E4 "h:"
 *   insn=0x000000000033A3E0 string=0x000000000033A3E8 "h"
 *   insn=0x000000000033A3F4 string=0x000000000033A3F8 "\t"
 *   insn=0x000000000033A3F8 string=0x000000000033A3FC "?"
 *   insn=0x000000000033A400 string=0x000000000033A404 "\t"
 *   insn=0x000000000033A404 string=0x000000000033A408 "?"
 *   insn=0x000000000033A408 string=0x000000000033A40C "A"
 *   insn=0x000000000033A40C string=0x000000000033A410 ""
 *   insn=0x000000000033A410 string=0x000000000033A414 "h"
 *   insn=0x000000000033A41C string=0x000000000033A420 ""
 *   insn=0x000000000033A424 string=0x000000000033A428 "8"
 *   insn=0x000000000033A428 string=0x000000000033A44C "h"
 *   insn=0x000000000033A42C string=0x000000000033A430 "l"
 *   insn=0x000000000033A438 string=0x000000000033A43C ""
 *   insn=0x000000000033A440 string=0x000000000033A444 ""
 *   insn=0x000000000033A458 string=0x000000000033A45C "\t"
 *   insn=0x000000000033A460 string=0x000000000033A464 ")"
 *   insn=0x000000000033A464 string=0x000000000033A468 ""
 *   insn=0x000000000033A46C string=0x000000000033A470 "h"
 *   insn=0x000000000033A474 string=0x000000000033A488 "h&G)\n"
 *   insn=0x000000000033A488 string=0x000000000033A48C "\n"
 *   insn=0x000000000033A490 string=0x000000000033A494 "j:"
 *   insn=0x000000000033A4A0 string=0x000000000033A4A4 "7!"
 *   insn=0x000000000033A4B8 string=0x000000000033A4BC "h"
 *   insn=0x000000000033A4C8 string=0x000000000033A4CC "Q""
 *   insn=0x000000000033A4CC string=0x000000000033A4D0 "h:@"
 *   insn=0x000000000033A4D0 string=0x000000000033A4D4 ""
 *   insn=0x000000000033A4D4 string=0x000000000033A4D8 "K"
 *   insn=0x000000000033A4D8 string=0x000000000033A4DC "h:"
 *   insn=0x000000000033A4D8 string=0x000000000033A4E0 "h"
 *   insn=0x000000000033A4E8 string=0x000000000033A4EC "B"
 *   insn=0x000000000033A4EC string=0x000000000033A4F0 "\t"
 *   insn=0x000000000033A4F0 string=0x000000000033A4F4 "?\t"
 *   insn=0x000000000033A4F8 string=0x000000000033A4FC ""
 *   insn=0x000000000033A4FC string=0x000000000033A500 "h"
 *   insn=0x000000000033A508 string=0x000000000033A50C ""
 *   insn=0x000000000033A510 string=0x000000000033A514 "8"
 *   insn=0x000000000033A514 string=0x000000000033A538 "h"
 *   insn=0x000000000033A518 string=0x000000000033A51C "1"
 *   insn=0x000000000033A524 string=0x000000000033A528 ""
 *   insn=0x000000000033A52C string=0x000000000033A530 ""
 *   insn=0x000000000033A544 string=0x000000000033A548 "\t"
 *   insn=0x000000000033A54C string=0x000000000033A550 ")"
 *   insn=0x000000000033A550 string=0x000000000033A554 ""
 *   insn=0x000000000033A558 string=0x000000000033A55C "h"
 *   insn=0x000000000033A560 string=0x000000000033A574 "h&G)\n"
 *   insn=0x000000000033A56C string=0x000000000033A570 " ""
 *   insn=0x000000000033A574 string=0x000000000033A578 "\n"
 *   insn=0x000000000033A57C string=0x000000000033A580 "j:"
 *   insn=0x000000000033A59C string=0x000000000033A5A0 "P"
 *   insn=0x000000000033A5A4 string=0x000000000033A5A8 "h"
 *   insn=0x000000000033A5A8 string=0x000000000033A5AC "H "
 *   insn=0x000000000033A5B8 string=0x000000000033A5BC "h:@"
 *   insn=0x000000000033A5BC string=0x000000000033A5C0 ""
 *   insn=0x000000000033A5C0 string=0x000000000033A5C4 "K"
 *   insn=0x000000000033A5C4 string=0x000000000033A5C8 "h:"
 *   insn=0x000000000033A5C4 string=0x000000000033A5CC "h"
 *   insn=0x000000000033A5D8 string=0x000000000033A5DC "\t"
 *   insn=0x000000000033A5DC string=0x000000000033A5E0 "?)"
 *   insn=0x000000000033A5E4 string=0x000000000033A5E8 ""
 *   insn=0x000000000033A5E8 string=0x000000000033A5EC "h"
 *   insn=0x000000000033A5F4 string=0x000000000033A5F8 ""
 *   insn=0x000000000033A5FC string=0x000000000033A600 "8"
 *   insn=0x000000000033A600 string=0x000000000033A624 "h"
 *   insn=0x000000000033A610 string=0x000000000033A614 ""
 *   insn=0x000000000033A618 string=0x000000000033A61C ""
 *   insn=0x000000000033A630 string=0x000000000033A634 "\t"
 *   insn=0x000000000033A638 string=0x000000000033A63C ")"
 *   insn=0x000000000033A63C string=0x000000000033A640 ""
 *   insn=0x000000000033A644 string=0x000000000033A648 "h"
 *   insn=0x000000000033A64C string=0x000000000033A660 "h&G)\n"
 *   insn=0x000000000033A654 string=0x000000000033A658 "~"
 *   insn=0x000000000033A660 string=0x000000000033A664 "\n"
 *   insn=0x000000000033A668 string=0x000000000033A66C "j:"
 *   insn=0x000000000033A66C string=0x000000000033A670 "*"
 *   insn=0x000000000033A68C string=0x000000000033A690 " "
 *   insn=0x000000000033A690 string=0x000000000033A694 "h"
 *   insn=0x000000000033A6A4 string=0x000000000033A6A8 "h:@"
 *   insn=0x000000000033A6A8 string=0x000000000033A6AC ""
 *   insn=0x000000000033A6AC string=0x000000000033A6B0 "K"
 *   insn=0x000000000033A6B0 string=0x000000000033A6B4 "h:"
 *   insn=0x000000000033A6B0 string=0x000000000033A6B8 "h"
 *   insn=0x000000000033A6C4 string=0x000000000033A6C8 "\t"
 *   insn=0x000000000033A6C8 string=0x000000000033A6CC "?I"
 *   insn=0x000000000033A6CC string=0x000000000033A6D0 "!"
 *   insn=0x000000000033A6D0 string=0x000000000033A6D4 ""
 *   insn=0x000000000033A6D4 string=0x000000000033A6D8 "h"
 *   insn=0x000000000033A6E0 string=0x000000000033A6E4 ""
 *   insn=0x000000000033A6EC string=0x000000000033A720 "h"
 *   insn=0x000000000033A704 string=0x000000000033A708 ""
 *   insn=0x000000000033A72C string=0x000000000033A730 "\t"
 *   insn=0x000000000033A734 string=0x000000000033A738 ")"
 *   insn=0x000000000033A738 string=0x000000000033A73C ""
 *   insn=0x000000000033A740 string=0x000000000033A744 "h"
 *   insn=0x000000000033A748 string=0x000000000033A75C "h&G)\n"
 *   insn=0x000000000033A750 string=0x000000000033A754 "?"
 *   insn=0x000000000033A75C string=0x000000000033A760 "\n"
 *   insn=0x000000000033A764 string=0x000000000033A768 "j:"
 *   insn=0x000000000033A768 string=0x000000000033A76C "J"
 *   insn=0x000000000033A788 string=0x000000000033A78C "@"
 *   insn=0x000000000033A788 string=0x00000000001F6400 "0'"
 *   insn=0x000000000033A78C string=0x000000000033A790 "h"
 *   insn=0x000000000033A790 string=0x000000000033A794 ""
 *   insn=0x000000000033A7A0 string=0x000000000033A7A4 "h:@"
 *   insn=0x000000000033A7A4 string=0x000000000033A7A8 ""
 *   insn=0x000000000033A7A8 string=0x000000000033A7AC "K"
 *   insn=0x000000000033A7AC string=0x000000000033A7B0 "h:"
 *   insn=0x000000000033A7AC string=0x000000000033A7B4 "h"
 *   insn=0x000000000033A7C0 string=0x000000000033A7C4 "\t"
 *   insn=0x000000000033A7C4 string=0x000000000033A7C8 "?i"
 *   insn=0x000000000033A7C8 string=0x000000000033A7CC "A"
 *   insn=0x000000000033A7CC string=0x000000000033A7D0 ""
 *   insn=0x000000000033A7D0 string=0x000000000033A7D4 "h"
 *   insn=0x000000000033A7DC string=0x000000000033A7E0 ""
 *   insn=0x000000000033A7E8 string=0x000000000033A800 "h"
 *   insn=0x000000000033A7EC string=0x000000000033A7F0 "|"
 *   insn=0x000000000033A7F8 string=0x00000000001FDA50 "0'"
 *   insn=0x000000000033A80C string=0x000000000033A810 "\t"
 *   insn=0x000000000033A814 string=0x000000000033A818 ")"
 *   insn=0x000000000033A818 string=0x000000000033A81C ""
 *   insn=0x000000000033A820 string=0x000000000033A824 "h"
 *   insn=0x000000000033A828 string=0x000000000033A83C "h&G)\n"
 *   insn=0x000000000033A830 string=0x000000000033A834 ""
 *   insn=0x000000000033A83C string=0x000000000033A840 "\n"
 *   insn=0x000000000033A844 string=0x000000000033A848 "j:"
 *   insn=0x000000000033A848 string=0x000000000033A84C "J"
 *   insn=0x000000000033A854 string=0x000000000033A858 "J "
 *   insn=0x000000000033A868 string=0x000000000033A86C "@\n"
 *   insn=0x000000000033A868 string=0x00000000001FAB50 "0'"
 *   insn=0x000000000033A86C string=0x000000000033A870 "h"
 *   insn=0x000000000033A870 string=0x000000000033A874 "\n"
 *   insn=0x000000000033A87C string=0x000000000033A880 "d!"
 *   insn=0x000000000033A880 string=0x000000000033A884 "h:@"
 *   insn=0x000000000033A884 string=0x000000000033A888 ""
 *   insn=0x000000000033A888 string=0x000000000033A88C "K"
 *   insn=0x000000000033A88C string=0x000000000033A890 "h:"
 *   insn=0x000000000033A894 string=0x000000000033A898 "h"
 *   insn=0x000000000033A898 string=0x000000000033A89C ")"
 *   insn=0x000000000033A89C string=0x000000000033A8A0 "?"
 *   insn=0x000000000033A8A4 string=0x000000000033A8A8 "\t"
 *   insn=0x000000000033A8A8 string=0x000000000033A8AC "?I"
 *   insn=0x000000000033A8AC string=0x000000000033A8B0 "!"
 *   insn=0x000000000033A8B0 string=0x000000000033A8B4 "\t"
 *   insn=0x000000000033A8B4 string=0x000000000033A8B8 "?"
 *   insn=0x000000000033A8BC string=0x000000000033A8C0 "\t"
 *   insn=0x000000000033A8C0 string=0x000000000033A8C4 "h"
 *   insn=0x000000000033A8D0 string=0x000000000033A8D4 ")qE"
 *   insn=0x000000000033A8D4 string=0x000000000033A8D8 ""
 *   insn=0x000000000033A8DC string=0x000000000033A8E0 "?"
 *   insn=0x000000000033A8E8 string=0x000000000033A8EC "="
 *   insn=0x000000000033A8F4 string=0x000000000033A8F8 "("
 *   insn=0x000000000033A900 string=0x000000000033A904 "w"
 *   insn=0x000000000033A904 string=0x000000000033A908 "`"
 *   insn=0x000000000033A904 string=0x00000000001FC6E0 "0'"
 *   insn=0x000000000033A90C string=0x000000000033A910 "h"
 *   insn=0x000000000033A910 string=0x000000000033A914 ")"
 *   insn=0x000000000033A914 string=0x000000000033A918 "?\t"
 *   insn=0x000000000033A91C string=0x000000000033A920 "\t"
 *   insn=0x000000000033A920 string=0x000000000033A924 "?i"
 *   insn=0x000000000033A924 string=0x000000000033A928 "a"
 *   insn=0x000000000033A928 string=0x000000000033A92C "\t"
 *   insn=0x000000000033A92C string=0x000000000033A930 "?"
 *   insn=0x000000000033A934 string=0x000000000033A938 "\t"
 *   insn=0x000000000033A938 string=0x000000000033A93C "h"
 *   insn=0x000000000033A948 string=0x000000000033A94C ")%F"
 *   insn=0x000000000033A94C string=0x000000000033A950 ""
 *   insn=0x000000000033A954 string=0x000000000033A958 "?"
 *   insn=0x000000000033A958 string=0x000000000033A95C "!"
 *   insn=0x000000000033A964 string=0x000000000033A968 "H"
 *   insn=0x000000000033A968 string=0x000000000033A96C ""
 *   insn=0x000000000033A970 string=0x000000000033A974 "a"
 *   insn=0x000000000033A974 string=0x000000000033A978 "("
 *   insn=0x000000000033A980 string=0x000000000033A984 "W"
 *   insn=0x000000000033A984 string=0x000000000033A988 "`"
 *   insn=0x000000000033A988 string=0x000000000033A98C "h"
 *   insn=0x000000000033A998 string=0x000000000033A99C "h.@"
 *   insn=0x000000000033A9A8 string=0x000000000033A9AC "`"
 *   insn=0x000000000033A9B0 string=0x000000000033A9C0 "H"
 *   insn=0x000000000033A9C8 string=0x000000000033A9CC "A"
 *   insn=0x000000000033A9CC string=0x000000000033A9F4 "7"
 *   insn=0x000000000033A9F4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033A9FC string=0x000000000033AA00 ","
 *   insn=0x000000000033AA00 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::MergePartialFromCodedStream(
        Caver::Proto::Mesh *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int64 *v5; // x27
  unsigned __int64 *v6; // x28
  unsigned int *v7; // x21
  char *v8; // x8
  unsigned __int64 v9; // x1
  unsigned int TagFallback; // w0
  int v11; // w8
  char *v12; // x9
  unsigned __int8 *v13; // x8
  int v14; // w10
  unsigned __int8 *v15; // x9
  int v16; // w10
  char *v17; // x9
  int v18; // w10
  unsigned __int8 *v19; // x9
  Caver::Proto::MeshData *v20; // x24
  char *v21; // x8
  int v22; // w8
  int v23; // w9
  int v24; // w25
  int v25; // w8
  bool v26; // vf
  int v27; // w8
  _BYTE *v28; // x8
  Caver::Proto::MeshData *v29; // x24
  char *v30; // x8
  int v31; // w8
  int v32; // w9
  int v33; // w25
  int v34; // w8
  int v35; // w8
  _BYTE *v36; // x8
  Caver::Proto::MeshData *v37; // x24
  char *v38; // x8
  int v39; // w8
  int v40; // w9
  int v41; // w25
  int v42; // w8
  int v43; // w8
  _BYTE *v44; // x8
  int v45; // w8
  int v46; // w25
  __int64 v47; // x8
  Caver::Proto::MeshData *v48; // x24
  __int64 v49; // x8
  char *v50; // x8
  int v51; // w8
  int v52; // w9
  int v53; // w25
  int v54; // w8
  int v55; // w8
  Caver::Proto::MeshData *v56; // x24
  char *v57; // x8
  int v58; // w8
  int v59; // w9
  int v60; // w25
  int v61; // w8
  int v62; // w8
  _BYTE *v63; // x8
  Caver::Proto::MeshData *v64; // x24
  char *v65; // x8
  int v66; // w8
  int v67; // w9
  int v68; // w25
  int v69; // w8
  int v70; // w8
  _BYTE *v71; // x8
  Caver::Proto::MeshData *v72; // x24
  char *v73; // x8
  int v74; // w8
  int v75; // w9
  int v76; // w25
  int v77; // w8
  int v78; // w8
  _BYTE *v79; // x8
  __int64 v80; // x24
  char *v81; // x8
  int v82; // w8
  int v83; // w9
  int v84; // w25
  int v85; // w8
  int v86; // w8
  _BYTE *v87; // x8
  Caver::Proto::Box *v88; // x24
  char *v89; // x8
  int v90; // w8
  int v91; // w9
  int v92; // w25
  int v93; // w8
  int v94; // w8
  unsigned __int8 *v95; // x8
  __int64 *v96; // x1
  _QWORD *v97; // x0
  unsigned __int8 *v98; // x8
  __int64 *v99; // x1
  _QWORD *v100; // x0
  __int64 result; // x0
  unsigned int *v102; // [xsp+20h] [xbp-80h]
  google::protobuf::internal::RepeatedPtrFieldBase *v103; // [xsp+28h] [xbp-78h]
  unsigned int v104; // [xsp+34h] [xbp-6Ch] BYREF
  __int64 v105; // [xsp+38h] [xbp-68h]

  v103 = (Caver::Proto::Mesh *)((char *)this + 48);
  v102 = (unsigned int *)((char *)this + 12);
  v5 = (unsigned __int64 *)((char *)a2 + 8);
  v6 = (unsigned __int64 *)((char *)a2 + 16);
  v7 = (unsigned int *)((char *)this + 16);
  v105 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
LABEL_2:
    v8 = (char *)*v5;
    if ( *v5 < *v6 && (*v8 & 0x80000000) == 0 )
    {
      v9 = (unsigned __int8)*v8;
      *((_DWORD *)a2 + 8) = v9;
      *((_QWORD *)a2 + 1) = v8 + 1;
      if ( !(_DWORD)v9 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v9 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v9 >> 3 )
    {
      case 1u:
        v11 = v9 & 7;
        if ( (v9 & 7) != 0 )
          goto LABEL_39;
        v12 = (char *)*v5;
        v13 = (unsigned __int8 *)*v6;
        if ( *v5 >= *v6 || (v14 = *v12, v14 < 0) )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v102) & 1) == 0 )
            return 0;
          v15 = (unsigned __int8 *)*v5;
          v13 = (unsigned __int8 *)*v6;
        }
        else
        {
          v15 = (unsigned __int8 *)(v12 + 1);
          *v102 = (unsigned __int8)v14;
          *v5 = (unsigned __int64)v15;
        }
        *((_DWORD *)this + 40) |= 1u;
        if ( v15 >= v13 || *v15 != 16 )
          continue;
        v17 = (char *)(v15 + 1);
        *v5 = (unsigned __int64)v17;
        if ( v17 < (char *)v13 )
          goto LABEL_30;
        goto LABEL_47;
      case 2u:
        v11 = v9 & 7;
        if ( (v9 & 7) != 0 )
          goto LABEL_39;
        v17 = (char *)*v5;
        v13 = (unsigned __int8 *)*v6;
        if ( *v5 >= *v6 )
          goto LABEL_47;
LABEL_30:
        v18 = *v17;
        if ( v18 < 0 )
        {
LABEL_47:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v7) & 1) == 0 )
            return 0;
          v19 = (unsigned __int8 *)*v5;
          v13 = (unsigned __int8 *)*v6;
        }
        else
        {
          v19 = (unsigned __int8 *)(v17 + 1);
          *v7 = (unsigned __int8)v18;
          *v5 = (unsigned __int64)v19;
        }
        v16 = *((_DWORD *)this + 40) | 2;
        *((_DWORD *)this + 40) = v16;
        if ( v19 >= v13 || *v19 != 26 )
          continue;
        *v5 = (unsigned __int64)(v19 + 1);
LABEL_52:
        v20 = (Caver::Proto::MeshData *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 40) = v16 | 4;
        if ( !v20 )
        {
          v20 = (Caver::Proto::MeshData *)operator new(0x20u);
          *((_QWORD *)v20 + 1) = 0x100000000LL;
          *((_QWORD *)v20 + 2) = 0;
          *((_QWORD *)v20 + 3) = 0;
          *(_QWORD *)v20 = off_6C9C48;
          *((_QWORD *)this + 3) = v20;
        }
        v21 = (char *)*v5;
        if ( *v5 >= *v6 || *v21 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v21;
          *v5 = (unsigned __int64)(v21 + 1);
        }
        v22 = *((_DWORD *)a2 + 14);
        v23 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v22 + 1;
        if ( v22 >= v23 )
          return 0;
        v24 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::MeshData::MergePartialFromCodedStream(v20, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v24);
        v25 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v25, 1);
        v27 = v25 - 1;
        if ( v27 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v27;
        v28 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v28 != 34 )
          continue;
        *v5 = (unsigned __int64)(v28 + 1);
LABEL_66:
        v29 = (Caver::Proto::MeshData *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 40) |= 8u;
        if ( !v29 )
        {
          v29 = (Caver::Proto::MeshData *)operator new(0x20u);
          *((_QWORD *)v29 + 1) = 0x100000000LL;
          *((_QWORD *)v29 + 2) = 0;
          *((_QWORD *)v29 + 3) = 0;
          *(_QWORD *)v29 = off_6C9C48;
          *((_QWORD *)this + 4) = v29;
        }
        v30 = (char *)*v5;
        if ( *v5 >= *v6 || *v30 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v30;
          *v5 = (unsigned __int64)(v30 + 1);
        }
        v31 = *((_DWORD *)a2 + 14);
        v32 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v31 + 1;
        if ( v31 >= v32 )
          return 0;
        v33 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::MeshData::MergePartialFromCodedStream(v29, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v33);
        v34 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v34, 1);
        v35 = v34 - 1;
        if ( v35 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v35;
        v36 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v36 != 42 )
          continue;
        *v5 = (unsigned __int64)(v36 + 1);
LABEL_80:
        v37 = (Caver::Proto::MeshData *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 40) |= 0x10u;
        if ( !v37 )
        {
          v37 = (Caver::Proto::MeshData *)operator new(0x20u);
          *((_QWORD *)v37 + 1) = 0x100000000LL;
          *((_QWORD *)v37 + 2) = 0;
          *((_QWORD *)v37 + 3) = 0;
          *(_QWORD *)v37 = off_6C9C48;
          *((_QWORD *)this + 5) = v37;
        }
        v38 = (char *)*v5;
        if ( *v5 >= *v6 || *v38 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v38;
          *v5 = (unsigned __int64)(v38 + 1);
        }
        v39 = *((_DWORD *)a2 + 14);
        v40 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v39 + 1;
        if ( v39 >= v40 )
          return 0;
        v41 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::MeshData::MergePartialFromCodedStream(v37, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v41);
        v42 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v42, 1);
        v43 = v42 - 1;
        if ( v43 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v43;
        v44 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v44 != 50 )
          continue;
        do
        {
          *v5 = (unsigned __int64)(v44 + 1);
LABEL_94:
          v46 = *((_DWORD *)this + 14);
          v45 = *((_DWORD *)this + 15);
          if ( v46 >= v45 )
          {
            if ( v45 == *((_DWORD *)this + 16) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v103, v45 + 1);
              v46 = *((_DWORD *)this + 14);
              v45 = *((_DWORD *)this + 15);
            }
            *((_DWORD *)this + 15) = v45 + 1;
            v48 = (Caver::Proto::MeshData *)operator new(0x20u);
            *((_QWORD *)v48 + 1) = 0x100000000LL;
            *(_QWORD *)v48 = off_6C9C48;
            *((_QWORD *)v48 + 2) = 0;
            *((_QWORD *)v48 + 3) = 0;
            v49 = *((_QWORD *)this + 6);
            *((_DWORD *)this + 14) = v46 + 1;
            *(_QWORD *)(v49 + 8LL * v46) = v48;
          }
          else
          {
            v47 = *((_QWORD *)this + 6);
            *((_DWORD *)this + 14) = v46 + 1;
            v48 = *(Caver::Proto::MeshData **)(v47 + 8LL * v46);
          }
          v50 = (char *)*v5;
          if ( *v5 >= *v6 || *v50 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
              return 0;
          }
          else
          {
            v104 = (unsigned __int8)*v50;
            *v5 = (unsigned __int64)(v50 + 1);
          }
          v51 = *((_DWORD *)a2 + 14);
          v52 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v51 + 1;
          if ( v51 >= v52 )
            return 0;
          v53 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
          if ( (Caver::Proto::MeshData::MergePartialFromCodedStream(v48, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(a2, v53);
          v54 = *((_DWORD *)a2 + 14);
          v26 = __OFSUB__(v54, 1);
          v55 = v54 - 1;
          if ( v55 < 0 == v26 )
            *((_DWORD *)a2 + 14) = v55;
          v44 = (_BYTE *)*v5;
          if ( *v5 >= *v6 )
            goto LABEL_2;
        }
        while ( *v44 == 50 );
        if ( *v44 != 58 )
          continue;
        *v5 = (unsigned __int64)(v44 + 1);
LABEL_112:
        v56 = (Caver::Proto::MeshData *)*((_QWORD *)this + 13);
        *((_DWORD *)this + 40) |= 0x40u;
        if ( !v56 )
        {
          v56 = (Caver::Proto::MeshData *)operator new(0x20u);
          *((_QWORD *)v56 + 1) = 0x100000000LL;
          *((_QWORD *)v56 + 2) = 0;
          *((_QWORD *)v56 + 3) = 0;
          *(_QWORD *)v56 = off_6C9C48;
          *((_QWORD *)this + 13) = v56;
        }
        v57 = (char *)*v5;
        if ( *v5 >= *v6 || *v57 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v57;
          *v5 = (unsigned __int64)(v57 + 1);
        }
        v58 = *((_DWORD *)a2 + 14);
        v59 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v58 + 1;
        if ( v58 >= v59 )
          return 0;
        v60 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::MeshData::MergePartialFromCodedStream(v56, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v60);
        v61 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v61, 1);
        v62 = v61 - 1;
        if ( v62 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v62;
        v63 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v63 != 66 )
          continue;
        *v5 = (unsigned __int64)(v63 + 1);
LABEL_126:
        v64 = (Caver::Proto::MeshData *)*((_QWORD *)this + 14);
        *((_DWORD *)this + 40) |= 0x80u;
        if ( !v64 )
        {
          v64 = (Caver::Proto::MeshData *)operator new(0x20u);
          *((_QWORD *)v64 + 1) = 0x100000000LL;
          *((_QWORD *)v64 + 2) = 0;
          *((_QWORD *)v64 + 3) = 0;
          *(_QWORD *)v64 = off_6C9C48;
          *((_QWORD *)this + 14) = v64;
        }
        v65 = (char *)*v5;
        if ( *v5 >= *v6 || *v65 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v65;
          *v5 = (unsigned __int64)(v65 + 1);
        }
        v66 = *((_DWORD *)a2 + 14);
        v67 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v66 + 1;
        if ( v66 >= v67 )
          return 0;
        v68 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::MeshData::MergePartialFromCodedStream(v64, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v68);
        v69 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v69, 1);
        v70 = v69 - 1;
        if ( v70 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v70;
        v71 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v71 != 74 )
          continue;
        *v5 = (unsigned __int64)(v71 + 1);
LABEL_140:
        v72 = (Caver::Proto::MeshData *)*((_QWORD *)this + 15);
        *((_DWORD *)this + 40) |= 0x100u;
        if ( !v72 )
        {
          v72 = (Caver::Proto::MeshData *)operator new(0x20u);
          *((_QWORD *)v72 + 1) = 0x100000000LL;
          *((_QWORD *)v72 + 2) = 0;
          *((_QWORD *)v72 + 3) = 0;
          *(_QWORD *)v72 = off_6C9C48;
          *((_QWORD *)this + 15) = v72;
        }
        v73 = (char *)*v5;
        if ( *v5 >= *v6 || *v73 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v73;
          *v5 = (unsigned __int64)(v73 + 1);
        }
        v74 = *((_DWORD *)a2 + 14);
        v75 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v74 + 1;
        if ( v74 >= v75 )
          return 0;
        v76 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::MeshData::MergePartialFromCodedStream(v72, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v76);
        v77 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v77, 1);
        v78 = v77 - 1;
        if ( v78 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v78;
        v79 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v79 != 82 )
          continue;
        *v5 = (unsigned __int64)(v79 + 1);
LABEL_154:
        v80 = *((_QWORD *)this + 16);
        *((_DWORD *)this + 40) |= 0x200u;
        if ( !v80 )
        {
          v80 = operator new(0x40u);
          *(_DWORD *)(v80 + 8) = 0;
          *(_QWORD *)(v80 + 48) = 0;
          *(_QWORD *)v80 = off_6C9CC0;
          *(_DWORD *)(v80 + 56) = 0;
          *(_DWORD *)(v80 + 40) = 0;
          *(_QWORD *)(v80 + 24) = 0;
          *(_QWORD *)(v80 + 32) = 0;
          *(_QWORD *)(v80 + 16) = 0;
          *((_QWORD *)this + 16) = v80;
        }
        v81 = (char *)*v5;
        if ( *v5 >= *v6 || *v81 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v81;
          *v5 = (unsigned __int64)(v81 + 1);
        }
        v82 = *((_DWORD *)a2 + 14);
        v83 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v82 + 1;
        if ( v82 >= v83 )
          return 0;
        v84 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::MeshMaterial::MergePartialFromCodedStream((Caver::Proto::MeshMaterial *)v80, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v84);
        v85 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v85, 1);
        v86 = v85 - 1;
        if ( v86 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v86;
        v87 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v87 != 90 )
          continue;
        *v5 = (unsigned __int64)(v87 + 1);
LABEL_168:
        v88 = (Caver::Proto::Box *)*((_QWORD *)this + 17);
        *((_DWORD *)this + 40) |= 0x400u;
        if ( !v88 )
        {
          v88 = (Caver::Proto::Box *)operator new(0x28u);
          Caver::Proto::Box::Box(v88);
          *((_QWORD *)this + 17) = v88;
        }
        v89 = (char *)*v5;
        if ( *v5 >= *v6 || *v89 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v104) & 1) == 0 )
            return 0;
        }
        else
        {
          v104 = (unsigned __int8)*v89;
          *v5 = (unsigned __int64)(v89 + 1);
        }
        v90 = *((_DWORD *)a2 + 14);
        v91 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v90 + 1;
        if ( v90 >= v91 )
          return 0;
        v92 = google::protobuf::io::CodedInputStream::PushLimit(a2, v104);
        if ( (Caver::Proto::Box::MergePartialFromCodedStream(v88, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v92);
        v93 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v93, 1);
        v94 = v93 - 1;
        if ( v94 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v94;
        v95 = (unsigned __int8 *)*v5;
        if ( (int)(*(_DWORD *)v6 - *v5) <= 1 || *v95 != 146 || v95[1] != 3 )
          continue;
        *v5 = (unsigned __int64)(v95 + 2);
LABEL_183:
        v96 = (__int64 *)*((_QWORD *)this + 18);
        *((_DWORD *)this + 40) |= 0x800u;
        if ( v96 == &Caver::Proto::Mesh::_default_vertex_data_ )
        {
          v97 = (_QWORD *)operator new(8u);
          *v97 = &byte_6FD2F8;
          *((_QWORD *)this + 18) = v97;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
          return 0;
        v98 = (unsigned __int8 *)*v5;
        if ( (int)(*(_DWORD *)v6 - *v5) < 2 || *v98 != 154 || v98[1] != 3 )
          continue;
        *v5 = (unsigned __int64)(v98 + 2);
LABEL_190:
        v99 = (__int64 *)*((_QWORD *)this + 19);
        *((_DWORD *)this + 40) |= 0x1000u;
        if ( v99 == &Caver::Proto::Mesh::_default_index_data_ )
        {
          v100 = (_QWORD *)operator new(8u);
          *v100 = &byte_6FD2F8;
          *((_QWORD *)this + 19) = v100;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
          return 0;
        if ( *v5 == *v6 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v11 = v9 & 7;
        if ( v11 != 2 )
          goto LABEL_39;
        v16 = *((_DWORD *)this + 40);
        goto LABEL_52;
      case 4u:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_66;
        goto LABEL_39;
      case 5u:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_80;
        goto LABEL_39;
      case 6u:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_94;
        goto LABEL_39;
      case 7u:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_112;
        goto LABEL_39;
      case 8u:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_126;
        goto LABEL_39;
      case 9u:
        v11 = v9 & 7;
        if ( v11 != 2 )
          goto LABEL_39;
        goto LABEL_140;
      case 0xAu:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_154;
        goto LABEL_39;
      case 0xBu:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_168;
        goto LABEL_39;
      case 0x32u:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_183;
        goto LABEL_39;
      case 0x33u:
        v11 = v9 & 7;
        if ( v11 == 2 )
          goto LABEL_190;
LABEL_39:
        if ( v11 != 4 )
          goto LABEL_40;
        return 1;
      default:
        if ( (v9 & 7) == 4 )
          return 1;
LABEL_40:
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v9,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

