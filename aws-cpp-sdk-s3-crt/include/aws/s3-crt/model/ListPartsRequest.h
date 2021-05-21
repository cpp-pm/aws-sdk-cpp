﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/S3CrtRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/model/RequestPayer.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Crt
{
namespace Model
{

  /**
   */
  class AWS_S3CRT_API ListPartsRequest : public S3CrtRequest
  {
  public:
    ListPartsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListParts"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ListPartsRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ListPartsRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket to which the parts are being uploaded. </p> <p>When
     * using this action with an access point, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the AWS SDKs, you provide
     * the access point ARN in place of the bucket name. For more information about
     * access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the AWS SDKs, you provide
     * the Outposts bucket ARN in place of the bucket name. For more information about
     * S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ListPartsRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline ListPartsRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline ListPartsRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline ListPartsRequest& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Sets the maximum number of parts to return.</p>
     */
    inline int GetMaxParts() const{ return m_maxParts; }

    /**
     * <p>Sets the maximum number of parts to return.</p>
     */
    inline bool MaxPartsHasBeenSet() const { return m_maxPartsHasBeenSet; }

    /**
     * <p>Sets the maximum number of parts to return.</p>
     */
    inline void SetMaxParts(int value) { m_maxPartsHasBeenSet = true; m_maxParts = value; }

    /**
     * <p>Sets the maximum number of parts to return.</p>
     */
    inline ListPartsRequest& WithMaxParts(int value) { SetMaxParts(value); return *this;}


    /**
     * <p>Specifies the part after which listing should begin. Only parts with higher
     * part numbers will be listed.</p>
     */
    inline int GetPartNumberMarker() const{ return m_partNumberMarker; }

    /**
     * <p>Specifies the part after which listing should begin. Only parts with higher
     * part numbers will be listed.</p>
     */
    inline bool PartNumberMarkerHasBeenSet() const { return m_partNumberMarkerHasBeenSet; }

    /**
     * <p>Specifies the part after which listing should begin. Only parts with higher
     * part numbers will be listed.</p>
     */
    inline void SetPartNumberMarker(int value) { m_partNumberMarkerHasBeenSet = true; m_partNumberMarker = value; }

    /**
     * <p>Specifies the part after which listing should begin. Only parts with higher
     * part numbers will be listed.</p>
     */
    inline ListPartsRequest& WithPartNumberMarker(int value) { SetPartNumberMarker(value); return *this;}


    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline ListPartsRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline ListPartsRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>Upload ID identifying the multipart upload whose parts are being listed.</p>
     */
    inline ListPartsRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    
    inline const RequestPayer& GetRequestPayer() const{ return m_requestPayer; }

    
    inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }

    
    inline void SetRequestPayer(const RequestPayer& value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }

    
    inline void SetRequestPayer(RequestPayer&& value) { m_requestPayerHasBeenSet = true; m_requestPayer = std::move(value); }

    
    inline ListPartsRequest& WithRequestPayer(const RequestPayer& value) { SetRequestPayer(value); return *this;}

    
    inline ListPartsRequest& WithRequestPayer(RequestPayer&& value) { SetRequestPayer(std::move(value)); return *this;}


    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const{ return m_expectedBucketOwner; }

    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }

    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline void SetExpectedBucketOwner(const Aws::String& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = value; }

    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline void SetExpectedBucketOwner(Aws::String&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::move(value); }

    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline void SetExpectedBucketOwner(const char* value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner.assign(value); }

    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline ListPartsRequest& WithExpectedBucketOwner(const Aws::String& value) { SetExpectedBucketOwner(value); return *this;}

    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline ListPartsRequest& WithExpectedBucketOwner(Aws::String&& value) { SetExpectedBucketOwner(std::move(value)); return *this;}

    /**
     * <p>The account ID of the expected bucket owner. If the bucket is owned by a
     * different account, the request will fail with an HTTP <code>403 (Access
     * Denied)</code> error.</p>
     */
    inline ListPartsRequest& WithExpectedBucketOwner(const char* value) { SetExpectedBucketOwner(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const{ return m_customizedAccessLogTag; }

    
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }

    
    inline void SetCustomizedAccessLogTag(const Aws::Map<Aws::String, Aws::String>& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = value; }

    
    inline void SetCustomizedAccessLogTag(Aws::Map<Aws::String, Aws::String>&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::move(value); }

    
    inline ListPartsRequest& WithCustomizedAccessLogTag(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomizedAccessLogTag(value); return *this;}

    
    inline ListPartsRequest& WithCustomizedAccessLogTag(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomizedAccessLogTag(std::move(value)); return *this;}

    
    inline ListPartsRequest& AddCustomizedAccessLogTag(const Aws::String& key, const Aws::String& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(key, value); return *this; }

    
    inline ListPartsRequest& AddCustomizedAccessLogTag(Aws::String&& key, const Aws::String& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::move(key), value); return *this; }

    
    inline ListPartsRequest& AddCustomizedAccessLogTag(const Aws::String& key, Aws::String&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(key, std::move(value)); return *this; }

    
    inline ListPartsRequest& AddCustomizedAccessLogTag(Aws::String&& key, Aws::String&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::move(key), std::move(value)); return *this; }

    
    inline ListPartsRequest& AddCustomizedAccessLogTag(const char* key, Aws::String&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(key, std::move(value)); return *this; }

    
    inline ListPartsRequest& AddCustomizedAccessLogTag(Aws::String&& key, const char* value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::move(key), value); return *this; }

    
    inline ListPartsRequest& AddCustomizedAccessLogTag(const char* key, const char* value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(key, value); return *this; }

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    int m_maxParts;
    bool m_maxPartsHasBeenSet;

    int m_partNumberMarker;
    bool m_partNumberMarkerHasBeenSet;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet;

    RequestPayer m_requestPayer;
    bool m_requestPayerHasBeenSet;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
