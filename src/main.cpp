#include <modloader/log.h>
#include <modloader/statichook.h>

using namespace modloader;

#define TAG "saveallchunks"

TClasslessInstanceHook(bool, _ZNK10LevelChunk23nonActorDataNeedsSavingEii, int wait, int maxWait) {
	return true;
}
