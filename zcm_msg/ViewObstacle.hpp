/** THIS IS AN AUTOMATICALLY GENERATED FILE.
 *  DO NOT MODIFY BY HAND!!
 *
 *  Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ViewObstacle_hpp__
#define __ViewObstacle_hpp__

#include <vector>
#include "ViewObstacleTrajectoryPoint.hpp"


class ViewObstacle
{
    public:
        double     x;

        double     y;

        double     heading;

        double     length;

        double     width;

        double     v;

        int32_t    num_poses;

        std::vector< ViewObstacleTrajectoryPoint > poses;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ViewObstacle() {}

        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void* buf, uint32_t offset, uint32_t maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline uint32_t getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void* buf, uint32_t offset, uint32_t maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "ViewObstacle"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ViewObstacle::encode(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = (int64_t)getHash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ViewObstacle::decode(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ViewObstacle::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ViewObstacle::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ViewObstacle::getTypeName()
{
    return "ViewObstacle";
}

int ViewObstacle::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->heading, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->length, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->width, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->v, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_poses, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    for (int a0 = 0; a0 < this->num_poses; ++a0) {
        thislen = this->poses[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    return pos;
}

int ViewObstacle::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->heading, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->length, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->width, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->v, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_poses, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    this->poses.resize(this->num_poses);
    for (int a0 = 0; a0 < this->num_poses; ++a0) {
        thislen = this->poses[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    return pos;
}

uint32_t ViewObstacle::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_poses; ++a0) {
        enc_size += this->poses[a0]._getEncodedSizeNoHash();
    }
    return enc_size;
}

uint64_t ViewObstacle::_computeHash(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == ViewObstacle::getHash)
            return 0;
    const __zcm_hash_ptr cp = { p, (void*)ViewObstacle::getHash };

    uint64_t hash = (uint64_t)0x9f8505452384ba1fLL +
         ViewObstacleTrajectoryPoint::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

#endif
