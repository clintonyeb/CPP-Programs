/*
 * ********************************************************************************************************************
 *  <p/>
 *  BACKENDLESS.COM CONFIDENTIAL
 *  <p/>
 *  ********************************************************************************************************************
 *  <p/>
 *  Copyright 2012 BACKENDLESS.COM. All Rights Reserved.
 *  <p/>
 *  NOTICE: All information contained herein is, and remains the property of Backendless.com and its suppliers,
 *  if any. The intellectual and technical concepts contained herein are proprietary to Backendless.com and its
 *  suppliers and may be covered by U.S. and Foreign Patents, patents in process, and are protected by trade secret
 *  or copyright law. Dissemination of this information or reproduction of this material is strictly forbidden
 *  unless prior written permission is obtained from Backendless.com.
 *  <p/>
 *  ********************************************************************************************************************
 */

package com.backendless.persistence.local;

import android.content.Context;
import android.content.SharedPreferences;

class AndroidUserIdStorage implements IStorage<String>
{
  private Context context;

  AndroidUserIdStorage( Context context )
  {
    this.context = context;
  }

  @Override
  public String get()
  {
    return context.getSharedPreferences( UserIdStorageFactory.key, Context.MODE_PRIVATE ).getString( UserIdStorageFactory.key, "" );
  }

  @Override
  public void set( String value )
  {
    SharedPreferences.Editor editor = context.getSharedPreferences( UserIdStorageFactory.key, Context.MODE_PRIVATE ).edit();
    editor.putString( UserIdStorageFactory.key, value );
    editor.commit();
  }
}