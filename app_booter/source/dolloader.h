#ifndef _DOLLOADER_H_
#define _DOLLOADER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*entrypoint) (void);

entrypoint load_dol_image(const void *dolstart);


#ifdef __cplusplus
}
#endif

#endif
