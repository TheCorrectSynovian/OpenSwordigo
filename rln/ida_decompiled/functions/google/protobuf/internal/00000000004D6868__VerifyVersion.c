/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D6868
 * Mangled: _ZN6google8protobuf8internal13VerifyVersionEiiPKc
 * Demangled: google::protobuf::internal::VerifyVersion(int,int,char const*)
 *
 * Callers: 2
 *   0x0000000000201A40  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D67BC  Caver::BinaryFile::SHA1Hash(void)
 *
 * Callees: 15
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7870  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000001FD430  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000001FE520  .snprintf
 *   0x00000000001FE620  .abort
 *   0x0000000000203230  .strlen
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 224
 *   insn=0x00000000004D6884 string=0x00000000004D6888 "W"
 *   insn=0x00000000004D68AC string=0x00000000004D68B0 "x"
 *   insn=0x00000000004D68B8 string=0x00000000004D68BC "\t"
 *   insn=0x00000000004D68BC string=0x0000000000598281 "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc"
 *   insn=0x00000000004D68C0 string=0x00000000004D68C4 ")"
 *   insn=0x00000000004D68CC string=0x00000000004D68D0 "ua"
 *   insn=0x00000000004D68D0 string=0x00000000004D68D4 "c"
 *   insn=0x00000000004D68E4 string=0x00000000005982C9 "This program requires version "
 *   insn=0x00000000004D68F4 string=0x00000000004D68F8 "h"
 *   insn=0x00000000004D68F8 string=0x00000000004D68FC "i"
 *   insn=0x00000000004D68FC string=0x00000000004D6900 "hc"
 *   insn=0x00000000004D6900 string=0x00000000004D6904 "I"
 *   insn=0x00000000004D6910 string=0x00000000004D6914 "h"
 *   insn=0x00000000004D6914 string=0x00000000004D6918 "\t}\t"
 *   insn=0x00000000004D6918 string=0x00000000004D691C "\n}"
 *   insn=0x00000000004D691C string=0x00000000004D6920 ")"
 *   insn=0x00000000004D6924 string=0x00000000004D6928 "$"
 *   insn=0x00000000004D6924 string=0x0000000000598567 "%d.%d.%d"
 *   insn=0x00000000004D692C string=0x00000000004D6930 "B"
 *   insn=0x00000000004D6958 string=0x00000000004D695C ".C"
 *   insn=0x00000000004D6960 string=0x00000000005982E8 " of the Protocol Buffer runtime library, but the installed version is "
 *   insn=0x00000000004D69B4 string=0x000000000059832F ".  Please update your library.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffers as your link-..."
 *   insn=0x00000000004D69D8 string=0x00000000004D69DC "~C"
 *   insn=0x00000000004D69E0 string=0x00000000005983FD "".)"
 *   insn=0x00000000004D69EC string=0x00000000004D69F0 "yC"
 *   insn=0x00000000004D69F8 string=0x00000000004D69FC "a"
 *   insn=0x00000000004D6A08 string=0x00000000004D6A0C "a"
 *   insn=0x00000000004D6A10 string=0x00000000004D6A14 "!"
 *   insn=0x00000000004D6A18 string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D6A28 string=0x00000000001F7870 "0'"
 *   insn=0x00000000004D6A34 string=0x00000000004D6A38 "~"
 *   insn=0x00000000004D6A38 string=0x00000000004D6A3C "_"
 *   insn=0x00000000004D6A38 string=0x00000000001FD430 "0'"
 *   insn=0x00000000004D6A4C string=0x00000000004D6A50 ""
 *   insn=0x00000000004D6A78 string=0x00000000004D6CD8 "i"
 *   insn=0x00000000004D6A88 string=0x00000000004D6CFC "i"
 *   insn=0x00000000004D6A94 string=0x00000000004D6A98 "A"
 *   insn=0x00000000004D6A98 string=0x00000000004D6D20 "i"
 *   insn=0x00000000004D6A9C string=0x00000000004D6AA0 "J"
 *   insn=0x00000000004D6AA0 string=0x00000000004D6AA4 "v"
 *   insn=0x00000000004D6AAC string=0x00000000004D6AB0 "\t"
 *   insn=0x00000000004D6AB4 string=0x00000000004D6AB8 ")"
 *   insn=0x00000000004D6AB8 string=0x00000000004D6ABC "\n\t"
 *   insn=0x00000000004D6AC0 string=0x00000000004D6AC4 "ua"
 *   insn=0x00000000004D6AD8 string=0x00000000004D6AE0 "B"
 *   insn=0x00000000004D6AD8 string=0x0000000000598401 "This program was compiled against version "
 *   insn=0x00000000004D6AE4 string=0x00000000004D6AE8 ";C"
 *   insn=0x00000000004D6AE8 string=0x00000000004D6AEC "h"
 *   insn=0x00000000004D6AEC string=0x00000000004D6AF4 "i"
 *   insn=0x00000000004D6B00 string=0x00000000004D6B04 ""
 *   insn=0x00000000004D6B04 string=0x00000000004D6B08 ""
 *   insn=0x00000000004D6B0C string=0x00000000004D6B10 "H"
 *   insn=0x00000000004D6B10 string=0x00000000004D6B14 "J"
 *   insn=0x00000000004D6B14 string=0x00000000004D6B18 "H"
 *   insn=0x00000000004D6B18 string=0x00000000004D6B1C "\t})"
 *   insn=0x00000000004D6B1C string=0x00000000004D6B20 "*"
 *   insn=0x00000000004D6B20 string=0x00000000004D6B24 ")"
 *   insn=0x00000000004D6B24 string=0x00000000004D6B28 ")"
 *   insn=0x00000000004D6B28 string=0x00000000004D6B2C "\n}"
 *   insn=0x00000000004D6B30 string=0x00000000004D6B34 "$"
 *   insn=0x00000000004D6B38 string=0x00000000004D6B3C "B"
 *   insn=0x00000000004D6B44 string=0x00000000004D6B48 "v"
 *   insn=0x00000000004D6B6C string=0x000000000059842C " of the Protocol Buffer runtime library, which is not compatible with the installed version ("
 *   insn=0x00000000004D6B98 string=0x00000000004D6B9C "a"
 *   insn=0x00000000004D6BC0 string=0x000000000059848A ").  Contact the program author for an update.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffer..."
 *   insn=0x00000000004D6C04 string=0x00000000004D6C08 "a"
 *   insn=0x00000000004D6C14 string=0x00000000004D6C18 "a"
 *   insn=0x00000000004D6C1C string=0x00000000004D6C20 "!"
 *   insn=0x00000000004D6C58 string=0x00000000004D6C5C ""
 *   insn=0x00000000004D6C70 string=0x00000000004D6C74 "`"
 *   insn=0x00000000004D6C84 string=0x00000000004D6D44 "i"
 *   insn=0x00000000004D6C94 string=0x00000000004D6D68 "i"
 *   insn=0x00000000004D6CA0 string=0x00000000004D6CA4 "A"
 *   insn=0x00000000004D6CA4 string=0x00000000004D6D8C "i"
 *   insn=0x00000000004D6CB0 string=0x00000000004D6CB4 "!"
 *   insn=0x00000000004D6CD8 string=0x00000000004D6CDC ")=G"
 *   insn=0x00000000004D6CDC string=0x00000000004D6CE0 "!"
 *   insn=0x00000000004D6CE0 string=0x00000000004D6CE4 "i"
 *   insn=0x00000000004D6CE4 string=0x00000000004D6CE8 "\t"
 *   insn=0x00000000004D6CE4 string=0x00000000004D6DB0 "\t"
 *   insn=0x00000000004D6CE8 string=0x00000000004D6CEC "*"
 *   insn=0x00000000004D6CEC string=0x00000000004D6CF0 "\n"
 *   insn=0x00000000004D6CF4 string=0x00000000004D6CF8 "1"
 *   insn=0x00000000004D6CF8 string=0x00000000004D6DBC "?"
 *   insn=0x00000000004D6CFC string=0x00000000004D6D00 ")=G"
 *   insn=0x00000000004D6D00 string=0x00000000004D6D04 "!"
 *   insn=0x00000000004D6D04 string=0x00000000004D6D08 "I"
 *   insn=0x00000000004D6D08 string=0x00000000004D6D0C "\t"
 *   insn=0x00000000004D6D08 string=0x00000000004D6DD0 "\t"
 *   insn=0x00000000004D6D0C string=0x00000000004D6D10 "*"
 *   insn=0x00000000004D6D10 string=0x00000000004D6D14 "\n"
 *   insn=0x00000000004D6D18 string=0x00000000004D6D1C "0"
 *   insn=0x00000000004D6D1C string=0x00000000004D6DDC "?"
 *   insn=0x00000000004D6D20 string=0x00000000004D6D24 ")=G"
 *   insn=0x00000000004D6D24 string=0x00000000004D6D28 "!"
 *   insn=0x00000000004D6D28 string=0x00000000004D6D2C ")"
 *   insn=0x00000000004D6D2C string=0x00000000004D6D30 "\t"
 *   insn=0x00000000004D6D2C string=0x00000000004D6DF0 "\t"
 *   insn=0x00000000004D6D30 string=0x00000000004D6D34 "*"
 *   insn=0x00000000004D6D34 string=0x00000000004D6D38 "\n"
 *   insn=0x00000000004D6D3C string=0x00000000004D6D40 "/"
 *   insn=0x00000000004D6D40 string=0x00000000004D6DFC "?"
 *   insn=0x00000000004D6D44 string=0x00000000004D6D48 ")=G"
 *   insn=0x00000000004D6D48 string=0x00000000004D6D4C "!"
 *   insn=0x00000000004D6D4C string=0x00000000004D6D50 "I"
 *   insn=0x00000000004D6D50 string=0x00000000004D6D54 "\t"
 *   insn=0x00000000004D6D50 string=0x00000000004D6E18 "\t"
 *   insn=0x00000000004D6D54 string=0x00000000004D6D58 "*"
 *   insn=0x00000000004D6D58 string=0x00000000004D6D5C "\n"
 *   insn=0x00000000004D6D60 string=0x00000000004D6D64 "0"
 *   insn=0x00000000004D6D64 string=0x00000000004D6E24 "?"
 *   insn=0x00000000004D6D68 string=0x00000000004D6D6C ")=G"
 *   insn=0x00000000004D6D6C string=0x00000000004D6D70 "!"
 *   insn=0x00000000004D6D70 string=0x00000000004D6D74 ")"
 *   insn=0x00000000004D6D74 string=0x00000000004D6D78 "\t"
 *   insn=0x00000000004D6D74 string=0x00000000004D6E38 "\t"
 *   insn=0x00000000004D6D78 string=0x00000000004D6D7C "*"
 *   insn=0x00000000004D6D7C string=0x00000000004D6D80 "\n"
 *   insn=0x00000000004D6D84 string=0x00000000004D6D88 "/"
 *   insn=0x00000000004D6D88 string=0x00000000004D6E44 "?"
 *   insn=0x00000000004D6D8C string=0x00000000004D6D90 ")=G"
 *   insn=0x00000000004D6D90 string=0x00000000004D6D94 "!"
 *   insn=0x00000000004D6D94 string=0x00000000004D6D98 "\t"
 *   insn=0x00000000004D6D98 string=0x00000000004D6D9C "\t"
 *   insn=0x00000000004D6D98 string=0x00000000004D6E58 "\t"
 *   insn=0x00000000004D6D9C string=0x00000000004D6DA0 "*"
 *   insn=0x00000000004D6DA0 string=0x00000000004D6DA4 "\n"
 *   insn=0x00000000004D6DA8 string=0x00000000004D6DAC "."
 *   insn=0x00000000004D6DAC string=0x00000000004D6E64 "?"
 *   insn=0x00000000004D6DB0 string=0x00000000004D6DB4 "*"
 *   insn=0x00000000004D6DB4 string=0x00000000004D6DB8 "\n"
 *   insn=0x00000000004D6DC4 string=0x00000000004D6DC8 "wM"
 *   insn=0x00000000004D6DC8 string=0x00000000004D6DCC ","
 *   insn=0x00000000004D6DD0 string=0x00000000004D6DD4 "*"
 *   insn=0x00000000004D6DD4 string=0x00000000004D6DD8 "\n"
 *   insn=0x00000000004D6DDC string=0x00000000004D6DE0 "l"
 *   insn=0x00000000004D6DE4 string=0x00000000004D6DE8 "oM"
 *   insn=0x00000000004D6DE8 string=0x00000000004D6DEC "("
 *   insn=0x00000000004D6DF0 string=0x00000000004D6DF4 "*"
 *   insn=0x00000000004D6DF4 string=0x00000000004D6DF8 "\n"
 *   insn=0x00000000004D6E04 string=0x00000000004D6E08 "gM"
 *   insn=0x00000000004D6E18 string=0x00000000004D6E1C "*"
 *   insn=0x00000000004D6E1C string=0x00000000004D6E20 "\n"
 *   insn=0x00000000004D6E2C string=0x00000000004D6E30 "]M"
 *   insn=0x00000000004D6E38 string=0x00000000004D6E3C "*"
 *   insn=0x00000000004D6E3C string=0x00000000004D6E40 "\n"
 *   insn=0x00000000004D6E4C string=0x00000000004D6E50 "UM"
 *   insn=0x00000000004D6E58 string=0x00000000004D6E5C "*"
 *   insn=0x00000000004D6E5C string=0x00000000004D6E60 "\n"
 *   insn=0x00000000004D6E6C string=0x00000000004D6E70 "MM"
 *   insn=0x00000000004D6E78 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D6E9C string=0x00000000004D6EA0 "G"
 *   insn=0x00000000004D6EA4 string=0x00000000004D6EA8 "I"
 *   insn=0x00000000004D6EAC string=0x00000000004D6EB0 "G"
 *   insn=0x00000000004D6EB4 string=0x00000000004D6EB8 ""
 *   insn=0x00000000004D6EBC string=0x00000000004D6EC0 "?"
 *   insn=0x00000000004D6EC8 string=0x00000000004D6ECC "(a"
 *   insn=0x00000000004D6ED0 string=0x00000000004D6ED4 "a"
 *   insn=0x00000000004D6ED4 string=0x00000000004D6F40 "j"
 *   insn=0x00000000004D6EE4 string=0x00000000004D6F1C "i"
 *   insn=0x00000000004D6EF4 string=0x00000000004D6EF8 "i"
 *   insn=0x00000000004D6EF8 string=0x00000000004D6EFC ")=G"
 *   insn=0x00000000004D6EFC string=0x00000000004D6F00 "!"
 *   insn=0x00000000004D6F04 string=0x00000000004D6F08 "\t"
 *   insn=0x00000000004D6F04 string=0x00000000004D70A0 "\t"
 *   insn=0x00000000004D6F08 string=0x00000000004D6F0C "*"
 *   insn=0x00000000004D6F0C string=0x00000000004D6F10 "\n"
 *   insn=0x00000000004D6F14 string=0x00000000004D6F18 "9"
 *   insn=0x00000000004D6F18 string=0x00000000004D6FFC "?"
 *   insn=0x00000000004D6F1C string=0x00000000004D6F20 ")=G"
 *   insn=0x00000000004D6F20 string=0x00000000004D6F24 "!"
 *   insn=0x00000000004D6F28 string=0x00000000004D6F2C "\t"
 *   insn=0x00000000004D6F28 string=0x00000000004D6F64 "\t"
 *   insn=0x00000000004D6F2C string=0x00000000004D6F30 "*"
 *   insn=0x00000000004D6F30 string=0x00000000004D6F34 "\n"
 *   insn=0x00000000004D6F38 string=0x00000000004D6F3C ""
 *   insn=0x00000000004D6F3C string=0x00000000004D6F70 "?"
 *   insn=0x00000000004D6F40 string=0x00000000004D6F44 "J=G"
 *   insn=0x00000000004D6F44 string=0x00000000004D6F48 ")!"
 *   insn=0x00000000004D6F4C string=0x00000000004D6F50 "*"
 *   insn=0x00000000004D6F4C string=0x00000000004D6F84 "*"
 *   insn=0x00000000004D6F50 string=0x00000000004D6F54 "K"
 *   insn=0x00000000004D6F54 string=0x00000000004D6F58 "+"
 *   insn=0x00000000004D6F60 string=0x00000000004D6F90 "_"
 *   insn=0x00000000004D6F64 string=0x00000000004D6F68 "*"
 *   insn=0x00000000004D6F68 string=0x00000000004D6F6C "\n"
 *   insn=0x00000000004D6F78 string=0x00000000004D6F7C "\nM"
 *   insn=0x00000000004D6F84 string=0x00000000004D6F88 "K"
 *   insn=0x00000000004D6F88 string=0x00000000004D6F8C "+"
 *   insn=0x00000000004D6F90 string=0x00000000004D6F94 ","
 *   insn=0x00000000004D6FAC string=0x00000000004D6FB0 "(a"
 *   insn=0x00000000004D6FB8 string=0x00000000004D7038 "j"
 *   insn=0x00000000004D6FC4 string=0x00000000004D6FC8 "a"
 *   insn=0x00000000004D6FC8 string=0x00000000004D7014 "i"
 *   insn=0x00000000004D6FD8 string=0x00000000004D6FDC "i"
 *   insn=0x00000000004D6FDC string=0x00000000004D6FE0 ")=G"
 *   insn=0x00000000004D6FE0 string=0x00000000004D6FE4 "!"
 *   insn=0x00000000004D6FE8 string=0x00000000004D6FEC "\t"
 *   insn=0x00000000004D6FEC string=0x00000000004D6FF0 "*"
 *   insn=0x00000000004D6FF0 string=0x00000000004D6FF4 "\n"
 *   insn=0x00000000004D6FFC string=0x00000000004D7000 "l"
 *   insn=0x00000000004D700C string=0x00000000004D7010 "-"
 *   insn=0x00000000004D7014 string=0x00000000004D7018 ")=G"
 *   insn=0x00000000004D7018 string=0x00000000004D701C "!"
 *   insn=0x00000000004D7020 string=0x00000000004D7024 "\t"
 *   insn=0x00000000004D7020 string=0x00000000004D705C "\t"
 *   insn=0x00000000004D7024 string=0x00000000004D7028 "*"
 *   insn=0x00000000004D7028 string=0x00000000004D702C "\n"
 *   insn=0x00000000004D7030 string=0x00000000004D7034 ""
 *   insn=0x00000000004D7034 string=0x00000000004D7068 "?"
 *   insn=0x00000000004D7038 string=0x00000000004D703C "J=G"
 *   insn=0x00000000004D703C string=0x00000000004D7040 ")!"
 *   insn=0x00000000004D7044 string=0x00000000004D7048 "*"
 *   insn=0x00000000004D7044 string=0x00000000004D707C "*"
 *   insn=0x00000000004D7048 string=0x00000000004D704C "K"
 *   insn=0x00000000004D704C string=0x00000000004D7050 "+"
 *   insn=0x00000000004D7058 string=0x00000000004D7088 "_"
 *   insn=0x00000000004D705C string=0x00000000004D7060 "*"
 *   insn=0x00000000004D7060 string=0x00000000004D7064 "\n"
 *   insn=0x00000000004D707C string=0x00000000004D7080 "K"
 *   insn=0x00000000004D7080 string=0x00000000004D7084 "+"
 *   insn=0x00000000004D70A0 string=0x00000000004D70A4 "*"
 *   insn=0x00000000004D70A4 string=0x00000000004D70A8 "\n"
 *   insn=0x00000000004D70A8 string=0x00000000004D70AC "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::VerifyVersion(
        google::protobuf::internal *this,
        unsigned int a2,
        const char *a3,
        const char *a4)
{
  int v6; // w20
  size_t v7; // x0
  __int64 v8; // x0
  google::protobuf::internal::Mutex *v9; // x22
  int v10; // w26
  void *v11; // x0
  void *v12; // x0
  char *v13; // x0
  size_t v14; // x0
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  unsigned int *v19; // x8
  int v20; // w9
  char *v21; // [xsp+18h] [xbp-118h] BYREF
  __int64 v22; // [xsp+20h] [xbp-110h] BYREF
  __int64 v23; // [xsp+28h] [xbp-108h] BYREF
  unsigned int v24; // [xsp+30h] [xbp-100h]
  const char *v25; // [xsp+38h] [xbp-F8h]
  unsigned int v26; // [xsp+40h] [xbp-F0h]
  char *v27; // [xsp+48h] [xbp-E8h] BYREF
  char s[127]; // [xsp+58h] [xbp-D8h] BYREF
  char v29; // [xsp+D7h] [xbp-59h]
  __int64 v30; // [xsp+D8h] [xbp-58h]

  v6 = (int)this;
  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (int)a2 <= 2003000 )
    goto LABEL_11;
  v24 = 3;
  v25 = "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc";
  v26 = 61;
  v27 = &byte_6FD2F8;
  sub_5677D4(&v27, "This program requires version ", 30, a4);
  snprintf(s, 0x80u, "%d.%d.%d", a2 / 0xF4240, a2 / 0x3E8 % 0x3E8, a2 % 0x3E8);
  v29 = 0;
  sub_566BB8((int)&v23, s);
  sub_567614(&v27, &v23);
  sub_5677D4(&v27, " of the Protocol Buffer runtime library, but the installed version is ", 70);
  snprintf(s, 0x80u, "%d.%d.%d", 2, 3, 0);
  v29 = 0;
  sub_566BB8((int)&v22, s);
  sub_567614(&v27, &v22);
  sub_5677D4(
    &v27,
    ".  Please update your library.  If you compiled the program yourself, make sure that your headers are from the same "
    "version of Protocol Buffers as your link-time library.  (Version verification failed in \"",
    205);
  v7 = strlen(a3);
  sub_5677D4(&v27, a3, v7);
  sub_5677D4(&v27, "\".)", 3);
  if ( v24 == 3 )
  {
    v8 = 3;
  }
  else
  {
    pthread_once(
      google::protobuf::internal::log_silencer_count_init_,
      (void (*)(void))google::protobuf::internal::InitLogSilencerCount);
    v9 = (google::protobuf::internal::Mutex *)qword_6EA058;
    google::protobuf::internal::Mutex::Lock((google::protobuf::internal::Mutex *)qword_6EA058);
    v10 = dword_6EA060;
    google::protobuf::internal::Mutex::Unlock(v9);
    if ( v10 > 0 )
      goto LABEL_7;
    v8 = v24;
  }
  off_6E8900(v8, v25, v26, &v27);
LABEL_7:
  if ( v24 == 3 )
    abort();
  v11 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v22 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v11);
  }
  v12 = (void *)(v23 - 24);
  if ( (__int64 *)(v23 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v23 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v12);
  }
  v13 = v27 - 24;
  if ( v27 - 24 == (char *)&qword_6FD2E0 )
    goto LABEL_11;
  v19 = (unsigned int *)(v27 - 8);
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
  if ( v20 > 0 )
  {
LABEL_11:
    if ( v6 >= 2003000 )
      return;
LABEL_12:
    v21 = &byte_6FD2F8;
    sub_5677D4(&v21, "This program was compiled against version ", 42, a4);
    snprintf(s, 0x80u, "%d.%d.%d", v6 / 1000000, v6 / 1000 % 1000, v6 % 1000);
    v29 = 0;
    sub_566BB8((int)&v23, s);
    sub_567614(&v21, &v23);
    sub_5677D4(
      &v21,
      " of the Protocol Buffer runtime library, which is not compatible with the installed version (",
      93);
    snprintf(s, 0x80u, "%d.%d.%d", 2, 3, 0);
    v29 = 0;
    sub_566BB8((int)&v22, s);
    sub_567614(&v21, &v22);
    sub_5677D4(
      &v21,
      ").  Contact the program author for an update.  If you compiled the program yourself, make sure that your headers a"
      "re from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \"",
      220);
    v14 = strlen(a3);
    sub_5677D4(&v21, a3, v14);
    sub_5677D4(&v21, "\".)", 3);
    off_6E8900(3, "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc", 72, &v21);
    abort();
  }
  operator delete(v13);
  if ( v6 < 2003000 )
    goto LABEL_12;
}

