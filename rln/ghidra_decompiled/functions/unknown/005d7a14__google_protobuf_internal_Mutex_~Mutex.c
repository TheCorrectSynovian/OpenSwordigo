/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7a14
 * Function: google::protobuf::internal::Mutex::~Mutex
 * Signature: undefined __thiscall ~Mutex(Mutex * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::Mutex::~Mutex() */

void __thiscall google::protobuf::internal::Mutex::~Mutex(Mutex *this)

{
  pthread_mutex_destroy(*(pthread_mutex_t **)this);
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


