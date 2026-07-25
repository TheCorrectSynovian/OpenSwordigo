/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE620
 * Mangled: .abort
 * Demangled: .abort
 *
 * Callers: 32
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D7128  google::protobuf::internal::VersionString(int)
 *   0x00000000004D786C  google::protobuf::internal::LogMessage::Finish(void)
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *   0x000000000051D5DC  sub_51D5DC
 *   0x000000000051D6EC  sub_51D6EC
 *   0x000000000051D874  sub_51D874
 *   0x000000000051D9B4  __gxx_personality_v0
 *   0x000000000051DFE0  __cxxabiv1::__terminate(void (*)(void))
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *   0x000000000057FCC8  sub_57FCC8
 *   0x000000000057FECC  sub_57FECC
 *   0x000000000057FF08  sub_57FF08
 *   0x000000000057FF60  sub_57FF60
 *   0x0000000000580074  sub_580074
 *   0x0000000000580138  sub_580138
 *   0x00000000005801B0  sub_5801B0
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000580ACC  sub_580ACC
 *   0x0000000000581080  sub_581080
 *   0x000000000058128C  sub_58128C
 *   0x00000000005813B4  sub_5813B4
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000005819C0  sub_5819C0
 *   0x0000000000581DA4  sub_581DA4
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581E64  sub_581E64
 *   0x0000000000581EC4  sub_581EC4
 *   0x00000000005822B0  sub_5822B0
 *   0x00000000005829FC  sub_5829FC
 *   0x0000000000583120  sub_583120
 *
 * Callees: 1
 *   0x00000000006FEA80  abort
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE628 string=0x00000000001FE62C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn abort(void)
{
  abort();
}

